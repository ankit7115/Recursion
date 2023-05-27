#include<bits/stdc++.h>

using namespace std;

void print(int i,int n){
    if(i>n)return;
    cout<<i<<"\n";
    print(i+1,n);
}

int main(){
    #ifndef ONLINEJUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    print(1,n);
    return 0;
}