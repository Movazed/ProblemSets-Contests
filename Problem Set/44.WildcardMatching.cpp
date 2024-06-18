#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(), n = p.length();
        int i = 0, j = 0, asterick = -1, match;
        while (i < m) {
            if (j < n && p[j] == '*') {
                match = i;  
                asterick = j++;
            }
            else if (j < n && (s[i] == p[j] || p[j] == '?')) {
                i++;
                j++;
            }
            else if (asterick >= 0) {
                i = ++match;
                j = asterick + 1;
            }
            else return false;
        }
        while (j < n && p[j] == '*') j++;
        return j == n;
    }
};

int main() {
    Solution solution;
    vector<pair<string, string>> testCases = {
        {"aa", "a"},
        {"aa", "*"},
        {"cb", "?a"},
        {"adceb", "*a*b"},
        {"acdcb", "a*c?b"},
        {"", "*"},
        {"", "?"}
    };

    for (auto& testCase : testCases) {
        string s = testCase.first;
        string p = testCase.second;
        bool result = solution.isMatch(s, p);
        cout << "isMatch(\"" << s << "\", \"" << p << "\") = " << (result ? "true" : "false") << endl;
    }

    return 0;
}
