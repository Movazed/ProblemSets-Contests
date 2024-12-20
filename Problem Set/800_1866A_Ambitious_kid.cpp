#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll minOper = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if (t == 0)
        {
            minOper = 0;
            break;
        }
        minOper = min(minOper, abs(t));
    }

    cout << minOper << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    while (T--) 
    {
        solve();
    }
}