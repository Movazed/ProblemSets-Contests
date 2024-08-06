#include <iostream>
#include <vector>
using namespace std;

string check(int a, int b, int c, vector<pair<int, int>> &d) {
    if (d[0].first >= b) return "YES";
    for (int i = 1; i < a; ++i)
        if (d[i].first - d[i - 1].second >= b) return "YES";
    if (c - d[a - 1].second >= b) return "YES";
    return "NO";
}

int main() {
    int x;
    cin >> x;
    vector<string> y;
    while (x--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<pair<int, int>> d(a);
        for (int i = 0; i < a; ++i)
            cin >> d[i].first >> d[i].second;
        y.push_back(check(a, b, c, d));
    }
    for (const auto &z : y)
        cout << z << endl;
    return 0;
}
