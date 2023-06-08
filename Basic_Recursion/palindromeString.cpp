#include<bits/stdc++.h>

using namespace std;

bool recFunction(string &s,int i) {
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-1-i])return false;
     return recFunction(s,i+1);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;


    if(recFunction(s,0)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}