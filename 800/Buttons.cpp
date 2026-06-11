#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c; cin >> a >> b >> c;
    if(a > b){
        cout<<"First"<<endl;
    }else if(b > a){
        cout<<"Second"<<endl;
    }else{
        if(c % 2 == 0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
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
