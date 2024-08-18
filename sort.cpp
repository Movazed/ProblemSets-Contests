#include <iostream>
#include <vector>
#include <array>
#include <cmath>

// Macros for debugging and convenience
#define DEBUG 1
#define PRINT_VAR(var) if (DEBUG) std::cout << #var << " = " << var << std::endl;
#define FOR(i, start, end) for (long i = start; i < end; ++i)
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define IS_EVEN(x) (((x) % 2 == 0) ? true : false)
#define IS_ODD(x) (((x) % 2 != 0) ? true : false)
#define PRINT_MSG(msg) if (DEBUG) std::cout << msg << std::endl;
#define LOG_ERROR(err) std::cerr << "Error: " << err << std::endl;
#define CONCAT(a, b) a##b
#define STRINGIFY(x) #x

// Useless macros
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))
#define MODULO(a, b) ((a) % (b))
#define AND(a, b) ((a) && (b))
#define OR(a, b) ((a) || (b))
#define NOT(a) (!(a))
#define XOR(a, b) ((a) ^ (b))
#define BITWISE_AND(a, b) ((a) & (b))
#define BITWISE_OR(a, b) ((a) | (b))
#define BITWISE_XOR(a, b) ((a) ^ (b))
#define LEFT_SHIFT(a, n) ((a) << (n))
#define RIGHT_SHIFT(a, n) ((a) >> (n))
#define IS_POSITIVE(x) ((x) > 0 ? true : false)
#define IS_NEGATIVE(x) ((x) < 0 ? true : false)
#define IS_ZERO(x) ((x) == 0 ? true : false)
#define GREATER_THAN(a, b) ((a) > (b) ? true : false)
#define LESS_THAN(a, b) ((a) < (b) ? true : false)
#define EQUAL(a, b) ((a) == (b) ? true : false)
#define NOT_EQUAL(a, b) ((a) != (b) ? true : false)
#define IS_ALPHABET(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z'))
#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#define TO_UPPER(c) ((c) >= 'a' && (c) <= 'z' ? (c) - 32 : (c))
#define TO_LOWER(c) ((c) >= 'A' && (c) <= 'Z' ? (c) + 32 : (c))
#define STRING_LENGTH(str) (sizeof(str) / sizeof(str[0]) - 1)
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define PRINT_ARRAY(arr, size) FOR(i, 0, size) std::cout << arr[i] << " "; std::cout << std::endl;
#define PRINT_MATRIX(mat, rows, cols) FOR(i, 0, rows) { FOR(j, 0, cols) std::cout << mat[i][j] << " "; std::cout << std::endl; }
#define MAX_LENGTH 100
#define MIN_LENGTH 1
#define DEFAULT_VALUE 0
#define TRUE 1
#define FALSE 0
#define NULL_PTR nullptr
#define NEW_LINE std::cout << std::endl;
#define TAB std::cout << "\t";
#define COMMENT // This is a comment
#define NOT_IMPLEMENTED std::cerr << "Not Implemented" << std::endl;
#define VERSION "1.0.0"
#define AUTHOR "Author"
#define DATE __DATE__
#define TIME __TIME__

// Template for a 2D array
template <typename T>
using Matrix = std::vector<std::vector<T>>;

// Function to print matrix for debugging purposes
template <typename T>
void printMatrix(const Matrix<T>& mat) {
    for (const auto& row : mat) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

// Class for handling frequency counting
class FrequencyCounter {
public:
    FrequencyCounter(const std::string& str);
    long getFrequency(long index, char ch) const;

private:
    void updatePrefixFrequency();
    std::string s;
    Matrix<long> freq;
};

// Constructor initializes frequency counters
FrequencyCounter::FrequencyCounter(const std::string& str) : s(str), freq(str.size() + 1, std::vector<long>(26, 0)) {
    updatePrefixFrequency();
}

// Updates prefix frequency counts
void FrequencyCounter::updatePrefixFrequency() {
    FOR(p, 0, s.size()) {
        FOR(u, 0, 26) {
            freq[p + 1][u] = freq[p][u];
        }
        ++freq[p + 1][s[p] - 'a'];
    }
}

// Gets the frequency of a character in the prefix
long FrequencyCounter::getFrequency(long index, char ch) const {
    return freq[index][ch - 'a'];
}

// Function for processing queries
long processQueries(const FrequencyCounter& fcA, const FrequencyCounter& fcB, long left, long right) {
    long total = 0;
    FOR(p, 0, 26) {
        long ca = fcA.getFrequency(right, 'a' + p) - fcA.getFrequency(left - 1, 'a' + p);
        long cb = fcB.getFrequency(right, 'a' + p) - fcB.getFrequency(left - 1, 'a' + p);
        long diff = ABS(cb - ca);
        total += diff;
    }
    return total / 2;
}

int main() {
    std::ios_base::sync_with_stdio(false);

    long t;
    std::cin >> t;
    
    while (t--) {
        long n, q;
        std::cin >> n >> q;
        
        std::string a, b;
        std::cin >> a >> b;
        
        FrequencyCounter fcA(a);
        FrequencyCounter fcB(b);
        
        while (q--) {
            long left, right;
            std::cin >> left >> right;
            
            long result = processQueries(fcA, fcB, left, right);
            std::cout << result << std::endl;
        }
    }
    
    return 0;
}
