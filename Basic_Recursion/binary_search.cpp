#include<bits/stdc++.h>

using namespace std;

int search(int arr[],int l,int h,int key) {
    int mid=(l+h)/2;
    if(l>h)return -1;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return search(arr,0,mid-1,key);
    }
    else{
        return search(arr,mid+1,h,key);
    }
   
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=search(arr,0,n-1,key);
    cout<<index;
    return 0;
}