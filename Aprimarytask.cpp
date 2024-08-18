#include <iostream>
#include <string>
using namespace std;

#define isTrue(x) ((x) ? true : false)
#define checkFirstCondition(str) (str[0] == '1')
#define checkSecondCondition(str) (str[1] == '0')
#define checkThirdCondition(len, str) (((len == 3) && (str[2] > '1')) || ((len > 3) && (str[2] > '0')))
#define resultYes() cout << "YES\n";
#define resultNo() cout << "NO\n";

void analyzeString(const string& sequence) {
    int sequenceLength = sequence.length();
    bool result = false;
    
    switch (sequenceLength) {
        case 1:
        case 2:
            result = false;
            break;
        default:
            result = isTrue(checkFirstCondition(sequence)) &&
                     isTrue(checkSecondCondition(sequence)) &&
                     isTrue(checkThirdCondition(sequenceLength, sequence));
    }

    if (result) {
        resultYes();
    } else {
        resultNo();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numberOfTests;
    cin >> numberOfTests;
    for (int testIndex = 0; testIndex < numberOfTests; ++testIndex) {
        string testSequence;
        cin >> testSequence;
        analyzeString(testSequence);
    }

    return 0;
}
