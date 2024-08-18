#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 200005
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define rloop(i, start, end) for(int i = start; i > end; i--)

typedef long long int ll;
typedef pair<int, int> pii;

int arr[MAXN], pos[MAXN];

int main() {
    fast_io;

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int size;
        cin >> size;
        bool valid = true;

        loop(i, 1, size) {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        
        loop(i, arr[1] + 1, size) {
            if (pos[i - 1] > pos[i]) {
                valid = false;
                break;
            }
        }

        rloop(i, arr[1] - 1, 0) {
            if (pos[i + 1] > pos[i]) {
                valid = false;
                break;
            }
        }

        if (valid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
