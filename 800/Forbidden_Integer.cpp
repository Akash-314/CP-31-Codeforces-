#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    if(x != 1){
        cout<<"Yes"<<endl;
        cout<<n<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
    }else{
        if(k == 1){
            cout<<"No"<<endl;
        }else if(k > 2){
                cout<<"Yes"<<endl;
                if(n%2 == 0){
                    int m = n/2;
                    cout<<m<<endl;
                    while(m--){
                        cout<<2<<" ";
                    }
                }else{
                    ll sum = 0;
                    int cnt = 0;
                    cnt = n/2;
                    cout<<cnt<<endl;
                    cnt = cnt - 1;
                    while(cnt--){
                        cout<<2<<" ";
                    }
                    cout<<3;
                }
                cout<<endl;
        }else{
            if(n % 2 == 0){
                cout<<"Yes"<<endl;
                cout<<n/2<<endl;
                int m = n/2;
                while(m--){
                    cout<<2<<" ";
                }
                cout<<endl;
            }else{
                cout<<"No"<<endl;
            }
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
