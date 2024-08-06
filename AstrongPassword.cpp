// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Function to compute the time required to type a string on a keyboard
// int compty(const string &inp) {
//     int total_time = 2; // Initial time for the first character
//     // Loop through the string starting from the second character
//     for (size_t t = 1; t < inp.length(); ++t) {
//         // Check if the current character is the same as the previous one
//         if (inp[t] == inp[t - 1]) {
//             total_time += 1; // Less time if the same key is pressed
//         } else {
//             total_time += 2; // More time if a different key is pressed
//         }
//     }
//     return total_time;
// }

// // Function to determine the string configuration with the maximum typing time
// string maxitt(const string &org) {
//     int maxtt = 0;
//     string beststr = org;

//     // Loop through each character in the alphabet
//     for (char letter = 'a'; letter <= 'z'; ++letter) {
//         // Try inserting the character at each possible position
//         for (size_t posi = 0; posi <= org.length(); ++posi) {
//             string modstr = org.substr(0, posi) + letter + org.substr(posi);
//             int currtime = compty(modstr);

//             // Update the best configuration if a longer time is found
//             if (currtime > maxtt) {
//                 maxtt = currtime;
//                 beststr = modstr;
//             }
//         }
//     }

//     return beststr;
// }

// int main() {
//     int tcs;
//     cin >> tcs;

//     vector<string> res;
//     res.reserve(tcs);

//     // Read each input string and compute the result
//     for (int x = 0; x < tcs; ++x) {
//         string inpstr;
//         cin >> inpstr;
//         res.push_back(maxitt(inpstr));
//     }

//     // Output all results
//     for (const auto &rest : res) {
//         cout << rest << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the typing time for a given string
int calculateTypingTime(const string &sequence) {
    int time = 2; // Starting time for the first character
    for (size_t i = 1; i < sequence.size(); ++i)
        time += (sequence[i] == sequence[i - 1]) ? 1 : 2;
    return time;
}

// Function to find the modified string with the maximum typing time
string findMaxTypingTimeString(const string &original) {
    string optimalString = original;
    int maxTime = calculateTypingTime(original);

    // Iterate through the alphabet and positions in the string
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        for (size_t pos = 0; pos <= original.size(); ++pos) {
            // Create a new string with the current character inserted
            string newString = original.substr(0, pos) + ch + original.substr(pos);
            int newTime = calculateTypingTime(newString);

            // Update the optimal string if a longer time is found
            if (newTime > maxTime) {
                maxTime = newTime;
                optimalString = newString;
            }
        }
    }
    return optimalString;
}

int main() {
    int testCases;
    cin >> testCases;

    vector<string> results(testCases);
    // Process each test case
    for (int i = 0; i < testCases; ++i) {
        string inputString;
        cin >> inputString;
        results[i] = findMaxTypingTimeString(inputString);
    }

    // Output the results
    for (const auto &result : results)
        cout << result << endl;

    return 0;
}
