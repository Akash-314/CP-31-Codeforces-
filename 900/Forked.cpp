#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int dx[4] = {-1,1,-1,1}; int dy[4] = {-1,-1,1,1};
    ll a,b; cin >> a >> b;
    ll xk,yk; cin >> xk >> yk;
    ll xq,yq; cin >> xq >> yq;
    set<pair<ll,ll>> kh,qh;
    for(int i = 0; i < 4; i++){
        kh.insert({xk + dx[i]*a , yk + dy[i]*b});
        kh.insert({xk + dx[i]*b , yk + dy[i]*a});

        qh.insert({xq + dx[i]*a , yq + dy[i]*b});
        qh.insert({xq + dx[i]*b , yq + dy[i]*a});
    }
    ll checks = 0;
    for(auto pos : kh){
        if(qh.count(pos)){
            checks++;
        }
    }
    cout<<checks<<endl;
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