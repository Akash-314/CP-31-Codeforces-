#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s; cin >> s;
    int cnt = 0;
    int nz = 0, no = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') no++;
        else nz++;
    }
    if(min(nz, no) % 2 != 0){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
    }
}
    int main(){
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
