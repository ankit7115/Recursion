#include<bits/stdc++.h>

using namespace std;

void recFunction(int i,int n) {
    if(i>n)return;
    recFunction(i+1,n);
    cout<<i<<endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;


    recFunction(1,n);

    return 0;
}