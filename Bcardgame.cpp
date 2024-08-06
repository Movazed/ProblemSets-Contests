#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;  // Number of test cases

    while (testCases--) {
        int s1, s2, o1, o2; // Suneet's and Slavic's cards
        cin >> s1 >> s2 >> o1 >> o2;  // Read card values

        int winCount = 0;

        // First scenario: (s1 vs o1, s2 vs o2)
        int suneetRounds = 0, slavicRounds = 0;
        suneetRounds += (s1 > o1) ? 1 : 0;
        slavicRounds += (s1 < o1) ? 1 : 0;
        suneetRounds += (s2 > o2) ? 1 : 0;
        slavicRounds += (s2 < o2) ? 1 : 0;
        if (suneetRounds > slavicRounds) winCount++;

        // Second scenario: (s1 vs o2, s2 vs o1)
        suneetRounds = slavicRounds = 0;
        suneetRounds += (s1 > o2) ? 1 : 0;
        slavicRounds += (s1 < o2) ? 1 : 0;
        suneetRounds += (s2 > o1) ? 1 : 0;
        slavicRounds += (s2 < o1) ? 1 : 0;
        if (suneetRounds > slavicRounds) winCount++;

        // Third scenario: (s2 vs o1, s1 vs o2)
        suneetRounds = slavicRounds = 0;
        suneetRounds += (s2 > o1) ? 1 : 0;
        slavicRounds += (s2 < o1) ? 1 : 0;
        suneetRounds += (s1 > o2) ? 1 : 0;
        slavicRounds += (s1 < o2) ? 1 : 0;
        if (suneetRounds > slavicRounds) winCount++;

        // Fourth scenario: (s2 vs o2, s1 vs o1)
        suneetRounds = slavicRounds = 0;
        suneetRounds += (s2 > o2) ? 1 : 0;
        slavicRounds += (s2 < o2) ? 1 : 0;
        suneetRounds += (s1 > o1) ? 1 : 0;
        slavicRounds += (s1 < o1) ? 1 : 0;
        if (suneetRounds > slavicRounds) winCount++;

        cout << winCount << '\n';  // Output the number of games Suneet can win
    }

    return 0;
}
