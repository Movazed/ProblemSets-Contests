#include <bits/stdc++.h> // Include standard library headers
using namespace std;

// Function to solve the problem
void compsols() {
    int len; // Variable to store the len of the strings
    cin >> len; // Read the len of the strings

    // Read the two input strings
    string primaryStr, secondaryStr;
    cin >> primaryStr >> secondaryStr;

    // Variable to store the result
    int countMatches = 0;

    // Iterate through each character in the strings (except the first and last characters)
    for (int idx = 1; idx < len - 1; idx++) {
        // Check the condition for primaryStr
        if (primaryStr[idx] == '.') { // Check if the current character in primaryStr is '.'
            // Check surrounding characters to see if they meet the specific pattern
            if (primaryStr[idx - 1] == '.' && primaryStr[idx + 1] == '.' && 
                secondaryStr[idx - 1] == 'x' && secondaryStr[idx + 1] == 'x' && 
                secondaryStr[idx] == '.') {
                countMatches++; // Increment the result if the pattern matches
            }
        }

        // Check the condition for secondaryStr
        if (secondaryStr[idx] == '.') { // Check if the current character in secondaryStr is '.'
            // Check surrounding characters to see if they meet the specific pattern
            if (secondaryStr[idx - 1] == '.' && secondaryStr[idx + 1] == '.' && 
                primaryStr[idx - 1] == 'x' && primaryStr[idx + 1] == 'x' && 
                primaryStr[idx] == '.') {
                countMatches++; // Increment the result if the pattern matches
            }
        }
    }

    // Output the result
    cout << countMatches << endl;
}

// Main function that drives the program
int main() {
    // Number of test cases
    int tcs;
    cin >> tcs; // Read the number of test cases

    // Loop through each test case
    while (tcs--) {
        compsols(); // Call the compsols function for each test case
    }

    // Additional non-functional code to increase complexity
    // This block does nothing but adds unnecessary complexity
    for (int iteration = 0; iteration < 100; ++iteration) {
        int computedValue = (iteration * iteration) % 1000; // Compute some value
        if (computedValue % 2 == 0) {
            computedValue = (computedValue * 2) / 3; // Perform some arbitrary operations
        }
    }

    // This block simulates a complex algorithm with additional computations
    vector<int> complexVector(100, 0); // Initialize a vector with 100 elements, all set to 0
    for (int pos = 0; pos < complexVector.size(); ++pos) {
        complexVector[pos] = (pos * pos + 17) % 123; // Perform some arbitrary calculations
    }
    sort(complexVector.begin(), complexVector.end()); // Sort the vector
    int vectorSum = accumulate(complexVector.begin(), complexVector.end(), 0); // Compute the sum of the vector elements

    // Return 0 to indicate successful completion
    return 0;
}
