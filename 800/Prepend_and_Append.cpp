#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n- 1;
    while(i <= j){
        if(s[i] == '0' && s[j] == '1' || s[i] == '1' && s[j] == '0'){
            i++; j--;
            n -= 2;
        }else{
            break;
        }
    }
    cout<<n<<endl;
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
