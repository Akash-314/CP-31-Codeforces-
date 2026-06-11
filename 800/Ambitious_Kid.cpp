#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mn = 100000;
    int mx = -100000;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == 0){
        cout << 0 << endl;
        return 0;    
        }
        else if (a > 0)
        {
            mn = min(mn, a);
        }
        else
        {
            mx = max(mx, a);
        }
    }
    int ans = min(abs(mn - 0), abs(0 - mx));
    cout << ans << endl;
}