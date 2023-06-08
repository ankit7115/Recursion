#include<bits/stdc++.h>

using namespace std;

void printSubSeq(int ind,int n,int arr[],vector<int>vec) {
    if(ind==n){
        for(auto it:vec){
            cout<<it<<" ";
        }
        if(vec.size()==0){
            cout<<"{}";
            return;
        }
        cout<<endl;
        return;
    }
    vec.push_back(arr[ind]);
    printSubSeq(ind+1,n,arr,vec);
    vec.pop_back();
    printSubSeq(ind+1,n,arr,vec);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[]={3,1,2};
    vector<int>vec;
    

    printSubSeq(0,n,arr,vec);

    return 0;
}