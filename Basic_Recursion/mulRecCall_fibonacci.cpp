#include<bits/stdc++.h>

using namespace std;
// 0 1 1 2 3 5 8 13 21 
int recFunction(int n) {
    if(n==0)return 0;
    if(n==1)return 1;
    return recFunction(n-1)+recFunction(n-2);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    cout<<recFunction(n);

    return 0;
}