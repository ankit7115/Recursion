#include<bits/stdc++.h>

using namespace std;

void print(string name,int n){
    if(n==0)return;
    cout<<name<<" ";
    print(name,n-1);
}
int main(){
    int n;
    cin>>n;
    print("Ankit",n);
    return 0;
}