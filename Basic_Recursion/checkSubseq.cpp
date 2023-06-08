#include<bits/stdc++.h>

using namespace std;

bool checkSubsequence(int i,vector<int> vec,int n,int arr[],int &sum,int x) {
    if(i==n){
        if(sum==x){
            for(auto it:vec)cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    sum+=arr[i];
    vec.push_back(arr[i]);
    if( checkSubsequence(i+1, vec,n,arr,sum,x) == true){
        return true;
    }
    vec.pop_back();
    sum-=arr[i];
    if( checkSubsequence(i+1,vec,n,arr,sum,x) == true){
        return true;
    }
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,x;
    n=3,x=3;
    int arr[]={3,1,2};
    int sum=0;
    vector<int> vec;
    if(checkSubsequence(0,vec,n,arr,sum,x))cout<<"YES";
    else cout<<"NO";

    return 0;
}