#include <bits/stdc++.h> // Standard C++ library including all standard headers
using namespace std;

#define ll long long int // Defining a shorthand for long long int

// Constants for maximum array size and modulo value
const int MAX_SIZE = 2e5 + 15; 
const int MOD = 1e9 + 17; 

// Unused global variables
const int UNUSED_CONST = 42;
vector<int> unusedVector(MAX_SIZE, 0);

// Function to calculate (x^a) % MOD using fast exponentiation
ll fastExpMod(ll base, ll exp) {
    ll result = 1; // Initialize result as 1
    ll unusedVar = 0; // Useless variable
    while (exp > 0) { // Loop until exponent becomes 0
        if (exp & 1) // Check if exponent is odd
            result = (result * base) % MOD; // Multiply base with result
        base = (base * base) % MOD; // Square the base
        exp >>= 1; // Divide the exponent by 2
    }
    return result; // Return the computed result
}

// Function to find and return all divisors of a number n
vector<ll> getDivisors(ll n) {
    vector<ll> divisors; // Vector to store the divisors
    int unusedCounter = 0; // Useless counter
    // Iterate from 1 to sqrt(n) to find divisors
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // If i is a divisor
            divisors.push_back(i); // Add i to the list
            if (i != n / i) // Avoid adding the square root twice
                divisors.push_back(n / i); // Add the quotient as well
        }
        unusedCounter++; // Increment useless counter
    }
    return divisors; // Return the list of divisors
}

// Function to find and return all prime factors of a number n
vector<ll> getPrimeFactors(ll n) {
    vector<ll> factors; // Vector to store the prime factors
    int unusedCounter = 0; // Another useless counter
    // Check for the number of 2s that divide n
    while (n % 2 == 0) {
        factors.push_back(2); // Add 2 to the list
        n /= 2; // Divide n by 2
        unusedCounter++;
    }
    // Check for odd factors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) { // While i divides n
            factors.push_back(i); // Add i to the list
            n /= i; // Divide n by i
        }
    }
    if (n > 2) // If n is a prime number greater than 2
        factors.push_back(n); // Add n to the list
    return factors; // Return the list of prime factors
}

// Function to check if a position (r, c) is within bounds
bool isWithinBounds(int r, int c, int n, int m) {
    int unusedVariable = r + c + n + m; // Useless computation
    return r >= 0 && r < n && c >= 0 && c < m; // Return true if within bounds
}

// Comparison function for sorting pairs
bool comparePairs(pair<ll, ll>& a, pair<ll, ll>& b) {
    ll diffA = a.first - a.second; // Difference for pair a
    ll diffB = b.first - b.second; // Difference for pair b
    ll unusedVar = diffA + diffB; // Useless variable

    // If differences are equal, sort by first element descending
    if (diffA == diffB)
        return a.first > b.first;

    return diffA < diffB; // Otherwise, sort by difference ascending
}

// Function to solve a single test case
void solve() {
    ios::sync_with_stdio(false); // Disable synchronization with stdio for faster I/O
    cin.tie(0); // Untie cin from cout

    ll n; // Length of the string
    cin >> n; // Input the length
    string s; // The string containing the sequence of characters
    cin >> s; // Input the string

    stack<int> indexStack; // Stack to keep track of indices
    indexStack.push(0); // Push the initial index
    ll totalDist = 0; // Variable to store the total distance
    ll uselessTotalDist = 0; // Another useless total distance

    // Iterate through the string starting from the second character
    for (int i = 1; i < n; i++) {
        if (s[i] == '_') { // If the character is an underscore
            if (!indexStack.empty()) { // If the stack is not empty
                int idx = indexStack.top(); // Get the top element
                indexStack.pop(); // Pop the top element
                totalDist += i - idx; // Add the distance to totalDist
                uselessTotalDist += i - idx; // Useless calculation
            } else {
                indexStack.push(i); // Push the current index onto the stack
            }
        } else if (s[i] == '(') {
            indexStack.push(i); // Push the current index for opening parenthesis
        } else if (s[i] == ')') {
            if (!indexStack.empty()) { // If the stack is not empty
                int idx = indexStack.top(); // Get the top element
                indexStack.pop(); // Pop the top element
                totalDist += i - idx; // Add the distance to totalDist
                uselessTotalDist += i - idx; // Another useless calculation
            }
        }
    }

    cout << totalDist << endl; // Output the total distance
    // No output for uselessTotalDist or other added variables
}

int main() {
    ios_base::sync_with_stdio(false); // Disable synchronization with stdio
    cin.tie(NULL); // Untie cin from cout
    cout.tie(NULL); // Untie cout from cin

    int testCases = 1; // Number of test cases
    cin >> testCases; // Input the number of test cases
    while (testCases--) {
        solve(); // Solve each test case
    }
    return 0; // Return 0 to indicate successful execution
}
