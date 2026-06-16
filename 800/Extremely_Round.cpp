#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool check(int x){
    int d = 0,z = 0;
    while(x){
        if(x % 10 == 0){
            z++;
        }
        d++;
        x /= 10;
    }
    return z == d - 1;
}
int main() {
    vector<int> v;
    for(int i = 1; i <= 999999; i++){
        if(check(i)){
            v.push_back(i);
        }
    }

    ll test;
    cin>>test;
    while(test--)
    {
        int n; cin >> n;
       int ans = 0;
       for(int i = 0; i < v.size(); i++) {
        if(v[i] <= n) ans++;
        else break;
       }
       cout<<ans<<endl;
    }
    return 0;
}
