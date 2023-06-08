#include<bits/stdc++.h>

using namespace std;
int sum=0;
void recFunction(int i,int n) {
    //write code here
    if(i>n)return;
    sum+=i;
    recFunction(i+1,n);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;


    recFunction(1,n);
    cout<<sum;
    return 0;
}