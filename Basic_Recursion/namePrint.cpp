#include<bits/stdc++.h>

using namespace std;

void print(string name,int n){
    if(n==0)return;
    cout<<name<<endl;
    print(name,n-1);
}
int main(){
    #ifndef ONLINEJUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;
    print("Ankit",n);
    return 0;
}