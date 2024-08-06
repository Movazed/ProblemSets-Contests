#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_tests;
    cin >> num_tests;
    while (num_tests--) {
        string source, target;
        cin >> source >> target;
        int p = 0, q = 0;

        while (p < source.length() && q < target.length()) {
            if (source[p] == target[q]) {
                q++;
            } else if (source[p] == '?') {
                source[p] = target[q];
                q++;
            }
            p++;
        }

        if (q < target.length()) {
            cout << "NO" << endl;
            continue;
        }

        for (int r = 0; r < source.length(); r++) {
            if (source[r] == '?') {
                source[r] = 'a';
            }
        }

        cout << "YES" << endl;
        cout << source << endl;
    }
}
