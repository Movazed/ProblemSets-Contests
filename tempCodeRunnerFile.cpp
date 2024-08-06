#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    
    while (t--) {
        int left, right;
        cin >> left >> right; // Read the left and right bounds
        int result = 0;
        
        // Calculate result for all numbers from left to right
        for (int number = left; number <= right; ++number) {
            int current_number = number;
            while (current_number > 0) {
                current_number /= 3;
                ++result;
            }
        }
        
        cout << result << endl; // Print the result for this test case
    }
    
    return 0;
}
