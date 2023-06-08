#include<bits/stdc++.h>

using namespace std;

void recFunction(int arr[],int i,int j) {
    if(i>j)return;
    swap(arr[i],arr[j]);
    recFunction(arr,i+1,j-1);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    recFunction(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}