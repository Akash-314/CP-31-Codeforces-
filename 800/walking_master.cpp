#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c,d,sum = 0;
    cin >> a >> b >> c >> d;

    if(d < b){
        cout<<-1<<endl;
    }else{
        sum += (d - b);
        a += (d - b);
        if(a < c){
            cout<<-1<<endl;
            return;
        }
        sum += abs(a - c);
        cout<<sum<<endl;
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
// -2 0 3 -3