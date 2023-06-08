#include<bits/stdc++.h>

using namespace std;

int recFunction(int n) {
    if(n==0)
        return 1;
    
    return n*recFunction(n-1);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int fact=recFunction(n);
    cout<<fact;
    return 0;
}