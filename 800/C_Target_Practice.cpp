#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int score[10][10] ={
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};
void solve()
{
    char a[10][10];
    for(int i = 0; i < 10; i++) {
        string s; cin >> s;
        for(int j = 0; j < 10; j++){
            a[i][j] = s[j];
        }
    }
    ll ans = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            if(a[i][j] == 'X'){
                ans += score[i][j];
            }
        }
    }
    cout<<ans<<endl;
    
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
