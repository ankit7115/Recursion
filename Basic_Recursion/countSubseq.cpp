#include<bits/stdc++.h>

using namespace std;

int checkSubsequence(int i,int n,int arr[],int &sum,int x) {
    if(i==n){
        if(sum==x){
            return 1;
        }
        return 0;
    }
    sum+=arr[i];
    int l = checkSubsequence(i+1, n,arr,sum,x) ;
       
    sum-=arr[i];
    int r = checkSubsequence(i+1,n,arr,sum,x);
    return l+r;
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
   
    cout<<checkSubsequence(0,n,arr,sum,x);
    

    return 0;
}