#include<bits/stdc++.h>

using namespace std;

void recFunction(int n) {
   if(n==0)return;
   recFunction(n-1);
   cout<<n<<endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;


    recFunction(n);

    return 0;
}