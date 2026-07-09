#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s; cin >> s;
    int no = 0,nz = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') no++;
        else nz++;
    }
    int i = 0, ts = 0;
    while(i < s.size()){
        if(s[i] == '1' and nz > 0) {
            nz--;
            ts++;
        }
        else if(s[i] == '0' and no > 0) {
            no--;
            ts++;
        }else break;
        i++;
    }
    cout<<s.size() - ts<<endl;
}
int main() {
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
