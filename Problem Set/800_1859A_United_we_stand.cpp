#include<bits/stdc++.h>
#include <vector>
#include <stack>
#define nl std::endl
typedef long double ld;
typedef long long ll;
#define vi vector <int>
#define pair <int int> pii
#define LOOP(i, n) for (long long i = 0; i < (n); i++)
#define PRINT std::cout
using namespace std;

void solve() {
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {       
        ll n;
        cin >> n;

        vi array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        
        map<int, int> mp;
        for(auto a: array){
            mp[a]++;
        }

        if(mp.size() == 1){
            cout << -1 << endl;

        } else {
            int ele = begin(mp)->first;
            int fre  = begin(mp)->second;
        }
    }
    
}