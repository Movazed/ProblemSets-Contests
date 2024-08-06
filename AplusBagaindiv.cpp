#include<iostream>

using namespace std;

// Function that returns the sum of the digits of n
int aplusb(int n) {
    return (n / 10) + (n % 10);
}

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        cout << aplusb(n) << endl;
    }
    return 0;
}
