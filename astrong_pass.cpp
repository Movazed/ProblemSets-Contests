#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calculate_time(const string &s) {
    int time = 2; // time for the first character
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

string get_max_time_string(const string &s) {
    int max_time = 0;
    string result = s;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        for (size_t i = 0; i <= s.size(); ++i) {
            string temp = s.substr(0, i) + ch + s.substr(i);
            int time = calculate_time(temp);
            if (time > max_time) {
                max_time = time;
                result = temp;
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    results.reserve(t);

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        results.push_back(get_max_time_string(s));
    }

    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}