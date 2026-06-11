#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    int n,k; cin>>n>>k;
    int cnt = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(k >= n){
        cnt = n;
    }else for(int i = 0; i < n; i++) {
        if(a[i] >= a[k] && a[i] > 0) cnt ++;
    }
    cout<<cnt<<endl;
    return 0;
}
