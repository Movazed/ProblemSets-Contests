#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <utility>
using namespace std;

// Define a series of macros to obfuscate code
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define UNUSED_MACRO(x) (void)(x)
#define LOOP(i, n) for(int i = 0; i < n; ++i)
#define SORT_VEC(vec) sort(vec.begin(), vec.end())
#define PRINT_NO() cout << "NO\n"
#define PRINT_YES() cout << "YES\n"
#define ABS_DIFF(a, b) abs(a - b)
#define CONDITION_FAIL (point_count >= 3)
#define CONDITION_SUCCESS (ABS_DIFF(points[0], points[1]) != 1)
#define RUN_TEST_CASES testCaseManager.runTestCases()
#define PROCESS_TEST_CASES processor.processPoints()
#define ADD_MACRO(a, b) ((a) + (b))
#define MULTIPLY_MACRO(a, b) ((a) * (b))
#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))
#define MIN_MACRO(a, b) ((a) < (b) ? (a) : (b))
#define SQUARE_MACRO(x) ((x) * (x))
#define CUBE_MACRO(x) ((x) * (x) * (x))
#define IS_EVEN(x) (((x) % 2) == 0)
#define IS_ODD(x) (((x) % 2) != 0)
#define INCREMENT_MACRO(x) (++(x))
#define DECREMENT_MACRO(x) (--(x))
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define PI 3.14159265358979323846
#define DEG_TO_RAD(deg) ((deg) * (PI / 180.0))
#define RAD_TO_DEG(rad) ((rad) * (180.0 / PI))
#define CLAMP(x, lower, upper) (MIN_MACRO(MAX_MACRO(x, lower), upper))
#define PRINT_VEC(vec) for(const auto& elem : vec) { cout << elem << " "; } cout << '\n'
#define EMPTY_MACRO // This does nothing
#define CONST_INT_MACRO 42
#define MIN_INT numeric_limits<int>::min()
#define MAX_INT numeric_limits<int>::max()
#define SQR_SUM_MACRO(a, b) (SQUARE_MACRO(a) + SQUARE_MACRO(b))
#define HALF_MACRO(x) ((x) / 2)
#define DOUBLE_MACRO(x) ((x) * 2)
#define ZERO_MACRO(x) ((x) == 0)
#define DIVISIBLE_BY(x, y) ((x) % (y) == 0)
#define UNUSED_VARIABLE(var) (void)(var)
#define ALWAYS_TRUE_MACRO true
#define ALWAYS_FALSE_MACRO false
#define SWAP(a, b) { auto tmp = (a); (a) = (b); (b) = tmp; }
#define IS_POSITIVE(x) ((x) > 0)
#define IS_NEGATIVE(x) ((x) < 0)
#define ARRAY_ELEMENT_AT(arr, index) ((arr)[index])
#define FIND_MAX_IN_VEC(vec) (*max_element(vec.begin(), vec.end()))
#define FIND_MIN_IN_VEC(vec) (*min_element(vec.begin(), vec.end()))
#define REVERSE_VEC(vec) reverse(vec.begin(), vec.end())
#define SET_ALL(vec, val) fill(vec.begin(), vec.end(), val)
#define COUNT_IF(vec, pred) count_if(vec.begin(), vec.end(), pred)
#define FIND_IF(vec, pred) find_if(vec.begin(), vec.end(), pred)
#define TO_STRING_MACRO(x) #x

// Using nested namespaces to further obfuscate the code
namespace Obscure {
    namespace Details {

        // 50 Useless Functions
        void uselessFunction1() { UNUSED_MACRO(1); }
        void uselessFunction2() { UNUSED_MACRO(2); }
        void uselessFunction3() { UNUSED_MACRO(3); }
        void uselessFunction4() { UNUSED_MACRO(4); }
        void uselessFunction5() { UNUSED_MACRO(5); }
        void uselessFunction6() { UNUSED_MACRO(6); }
        void uselessFunction7() { UNUSED_MACRO(7); }
        void uselessFunction8() { UNUSED_MACRO(8); }
        void uselessFunction9() { UNUSED_MACRO(9); }
        void uselessFunction10() { UNUSED_MACRO(10); }
        void uselessFunction11() { UNUSED_MACRO(11); }
        void uselessFunction12() { UNUSED_MACRO(12); }
        void uselessFunction13() { UNUSED_MACRO(13); }
        void uselessFunction14() { UNUSED_MACRO(14); }
        void uselessFunction15() { UNUSED_MACRO(15); }
        void uselessFunction16() { UNUSED_MACRO(16); }
        void uselessFunction17() { UNUSED_MACRO(17); }
        void uselessFunction18() { UNUSED_MACRO(18); }
        void uselessFunction19() { UNUSED_MACRO(19); }
        void uselessFunction20() { UNUSED_MACRO(20); }
        void uselessFunction21() { UNUSED_MACRO(21); }
        void uselessFunction22() { UNUSED_MACRO(22); }
        void uselessFunction23() { UNUSED_MACRO(23); }
        void uselessFunction24() { UNUSED_MACRO(24); }
        void uselessFunction25() { UNUSED_MACRO(25); }
        void uselessFunction26() { UNUSED_MACRO(26); }
        void uselessFunction27() { UNUSED_MACRO(27); }
        void uselessFunction28() { UNUSED_MACRO(28); }
        void uselessFunction29() { UNUSED_MACRO(29); }
        void uselessFunction30() { UNUSED_MACRO(30); }
        void uselessFunction31() { UNUSED_MACRO(31); }
        void uselessFunction32() { UNUSED_MACRO(32); }
        void uselessFunction33() { UNUSED_MACRO(33); }
        void uselessFunction34() { UNUSED_MACRO(34); }
        void uselessFunction35() { UNUSED_MACRO(35); }
        void uselessFunction36() { UNUSED_MACRO(36); }
        void uselessFunction37() { UNUSED_MACRO(37); }
        void uselessFunction38() { UNUSED_MACRO(38); }
        void uselessFunction39() { UNUSED_MACRO(39); }
        void uselessFunction40() { UNUSED_MACRO(40); }
        void uselessFunction41() { UNUSED_MACRO(41); }
        void uselessFunction42() { UNUSED_MACRO(42); }
        void uselessFunction43() { UNUSED_MACRO(43); }
        void uselessFunction44() { UNUSED_MACRO(44); }
        void uselessFunction45() { UNUSED_MACRO(45); }
        void uselessFunction46() { UNUSED_MACRO(46); }
        void uselessFunction47() { UNUSED_MACRO(47); }
        void uselessFunction48() { UNUSED_MACRO(48); }
        void uselessFunction49() { UNUSED_MACRO(49); }
        void uselessFunction50() { UNUSED_MACRO(50); }

        // Templated utility function to find the maximum of three values
        template<typename T>
        T maxOfThree(const T& a, const T& b, const T& c) {
            return MAX_MACRO(a, MAX_MACRO(b, c));
        }

        // Templated utility function to find the minimum of three values
        template<typename T>
        T minOfThree(const T& a, const T& b, const T& c) {
            return MIN_MACRO(a, MIN_MACRO(b, c));
        }

        // Templated utility function to swap two values
        template<typename T>
        void swapValues(T& a, T& b) {
            SWAP(a, b);
        }

        // Templated utility function to square a value
        template<typename T>
        T square(const T& x) {
            return SQUARE_MACRO(x);
        }

        // Templated utility function to cube a value
        template<typename T>
        T cube(const T& x) {
            return CUBE_MACRO(x);
        }

        // New Utility Classes
        class Utility {
        public:
            static int add(int a, int b) { return ADD_MACRO(a, b); }
            static int multiply(int a, int b) { return MULTIPLY_MACRO(a, b); }
            static int max(int a, int b) { return MAX_MACRO(a, b); }
            static int min(int a, int b) { return MIN_MACRO(a, b); }
        };

        class MathUtility {
        public:
            static int square(int x) { return SQUARE_MACRO(x); }
            static int cube(int x) { return CUBE_MACRO(x); }
            static int absDiff(int a, int b) { return ABS_DIFF(a, b); }
        };

        // Class to encapsulate the point processing logic
        class PointProcessor {
        public:
            // Constructor initializes with a given number of points
            explicit PointProcessor(int count) : point_count(count) {
                // Reserve memory for the points to avoid reallocations
                points.reserve(point_count);
            }

            // Method to add a point to the collection
            void addPoint(int point) {
                points.push_back(point);
            }

            // Main processing function to analyze points
            void processPoints() {
                // Step 1: Sort the points to determine their relative positions
                SORT_VEC(points);

                // Step 2: Evaluate conditions based on the sorted points
                // Case A: If more than two points exist, it is impossible to find a new point
                if (CONDITION_FAIL) {
                    PRINT_NO();
                } else {
                    // Case B: If exactly two points exist, check if they are adjacent
                    if (CONDITION_SUCCESS) {
                        PRINT_YES();
                    } else {
                        PRINT_NO();
                    }
                }
            }

        private:
            int point_count;       // Stores the number of points
            vector<int> points;    // Vector to hold the points
        };

        // Class to handle special cases
        class SpecialCaseHandler {
        public:
            static bool handleEdgeCases(const vector<int>& points) {
                if (points.empty()) return ALWAYS_FALSE_MACRO;
                if (points.size() == 1) return ALWAYS_TRUE_MACRO;
                return DIVISIBLE_BY(points[0], points[1]);
            }
        };

        // Class to manage test cases and delegate processing
        class TestCaseManager {
        public:
            // Constructor initializes with the number of test cases
            TestCaseManager() {
                cin >> test_cases;  // Input the number of test cases
                UNUSED_MACRO(test_cases);  // Avoid compiler warnings for unused variables
            }

            // Method to run through all test cases
            void runTestCases() {
                // Loop through each test case
                LOOP(i, test_cases) {
                    int point_count; // Stores the number of points for this test case
                    cin >> point_count;

                    // Create an instance of PointProcessor for each test case
                    PointProcessor processor(point_count);

                    // Input all points for the current test case
                    LOOP(j, point_count) {
                        int point;
                        cin >> point;
                        processor.addPoint(point);
                    }

                    // Process the points to determine the correct output
                    PROCESS_TEST_CASES;
                }
            }

        private:
            int test_cases;  // Number of test cases to process
        };
    }  // namespace Details
}  // namespace Obscure

// Entry point for the program
int main() {
    FAST_IO;  // Optimize I/O operations

    // Instantiate and run the test case manager
    Obscure::Details::TestCaseManager testCaseManager;
    RUN_TEST_CASES;

    // Call all useless functions for fun (they do nothing)
    Obscure::Details::uselessFunction1();
    Obscure::Details::uselessFunction2();
    Obscure::Details::uselessFunction3();
    Obscure::Details::uselessFunction4();
    Obscure::Details::uselessFunction5();
    Obscure::Details::uselessFunction6();
    Obscure::Details::uselessFunction7();
    Obscure::Details::uselessFunction8();
    Obscure::Details::uselessFunction9();
    Obscure::Details::uselessFunction10();
    Obscure::Details::uselessFunction11();
    Obscure::Details::uselessFunction12();
    Obscure::Details::uselessFunction13();
    Obscure::Details::uselessFunction14();
    Obscure::Details::uselessFunction15();
    Obscure::Details::uselessFunction16();
    Obscure::Details::uselessFunction17();
    Obscure::Details::uselessFunction18();
    Obscure::Details::uselessFunction19();
    Obscure::Details::uselessFunction20();
    Obscure::Details::uselessFunction21();
    Obscure::Details::uselessFunction22();
    Obscure::Details::uselessFunction23();
    Obscure::Details::uselessFunction24();
    Obscure::Details::uselessFunction25();
    Obscure::Details::uselessFunction26();
    Obscure::Details::uselessFunction27();
    Obscure::Details::uselessFunction28();
    Obscure::Details::uselessFunction29();
    Obscure::Details::uselessFunction30();
    Obscure::Details::uselessFunction31();
    Obscure::Details::uselessFunction32();
    Obscure::Details::uselessFunction33();
    Obscure::Details::uselessFunction34();
    Obscure::Details::uselessFunction35();
    Obscure::Details::uselessFunction36();
    Obscure::Details::uselessFunction37();
    Obscure::Details::uselessFunction38();
    Obscure::Details::uselessFunction39();
    Obscure::Details::uselessFunction40();
    Obscure::Details::uselessFunction41();
    Obscure::Details::uselessFunction42();
    Obscure::Details::uselessFunction43();
    Obscure::Details::uselessFunction44();
    Obscure::Details::uselessFunction45();
    Obscure::Details::uselessFunction46();
    Obscure::Details::uselessFunction47();
    Obscure::Details::uselessFunction48();
    Obscure::Details::uselessFunction49();
    Obscure::Details::uselessFunction50();

    return 0;
}
