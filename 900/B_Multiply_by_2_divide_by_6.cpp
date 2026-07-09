#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n; cin >> n;
    if(n == 1) {
        cout<<0<<endl;
        return;
    }
    if(n % 3 != 0 ){
        cout<<-1<<endl;
    }else{
        int cnt = 0;
        while(n != 1){
            if(n % 3 != 0){
                cout<<-1<<endl;
                return;
            }
            if(n%6 == 0) n /= 6;
            else n *= 2; 
            cnt++;
        }
        cout<<cnt<<endl;
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
