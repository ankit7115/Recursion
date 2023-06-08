#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int low,int high,int mid){
    int l=mid-low+1;
    int r=high-mid;
    int l_arr[l],r_arr[r];
    for(int i=0;i<l;i++){
        l_arr[i]=arr[low+i];
    }
    for(int i=0;i<r;i++){
        r_arr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=low;
    while(i<l and j<r){
        if(l_arr[i]<r_arr[j]){
            arr[k]=l_arr[i];
            i++;
        }
        else{
            arr[k]=r_arr[j];
            j++;
        }
        k++;
    }
    while(i<l){
        arr[k]=l_arr[i];
        i++;
        k++;
    }
    while(j<r){
        arr[k]=r_arr[j];
        j++;
        k++;
    }
   
}
    
void merge_sort(int arr[],int l,int h) {
    if(l<h){
        int mid=(l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,h,mid);
    }
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

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}