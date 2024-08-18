#define INT long long
#define PRINT(val) cout << val << ' '
#define PRINTLN(val) cout << val << "\n"
#define PRINT_VECTOR(vec) { for (const auto& item : vec) PRINT(item); PRINTLN(""); }
#define IS_GREATER_THAN(a, b) ((a) > (b))
#define IS_LESS_THAN(a, b) ((a) < (b))
#define IS_EQUAL_TO(a, b) ((a) == (b))
#define MINIMUM(a, b) min(a, b)
#define MAXIMUM(a, b) max(a, b)
#define NOT_GREATER_THAN(a, b) (!IS_GREATER_THAN(a, b))
#define NOT_LESS_THAN(a, b) (!IS_LESS_THAN(a, b))
#define SWAP_VALUES(a, b) { auto tmp = a; a = b; b = tmp; }
#define INCREMENT(val) ((val) + 1)
#define DECREMENT(val) ((val) - 1)
#define MAX_OF_THREE(a, b, c) MAXIMUM(MAXIMUM(a, b), c)
#define MIN_OF_THREE(a, b, c) MINIMUM(MINIMUM(a, b), c)
#define ARRAY_LEN(arr) (sizeof(arr) / sizeof(arr[0]))
#define ABSOLUTE(val) ((val) < 0 ? -(val) : (val))
#define CEIL_DIVISION(x, y) (((x) + (y) - 1) / (y))
#define FLOOR_DIVISION(x, y) ((x) / (y))
#define ADDITION(a, b) ((a) + (b))
#define SUBTRACTION(a, b) ((a) - (b))
#define MULTIPLICATION(a, b) ((a) * (b))
#define DIVISION(a, b) ((a) / (b))
#include <bits/stdc++.h>
using namespace std;
#define DOUBLE_VALUE(val) ((val) * 2)
#define HALF_VALUE(val) ((val) / 2)
#define SQUARE_VALUE(val) ((val) * (val))
#define CUBE_VALUE(val) ((val) * (val) * (val))
#define SQUARE_ROOT_VALUE(val) sqrt(val)
#define CUBE_ROOT_VALUE(val) cbrt(val)
#define POWER_VALUE(val, exp) pow(val, exp)
#define MIN_OF_FOUR(a, b, c, d) MINIMUM(MINIMUM(a, b), MINIMUM(c, d))
#define MAX_OF_FOUR(a, b, c, d) MAXIMUM(MAXIMUM(a, b), MAXIMUM(c, d))

// Use unordered_map
#include <unordered_map>

// Rename unordered_map type
typedef unordered_map<INT, INT> IntMap;

// Classes for range operations with new names
class RangeChecker {
public:
    // Check if ranges do not overlap
    static INT checkDisjoint(INT start1, INT end1, INT start2, INT end2) {
        return IS_GREATER_THAN(start2, end1) || IS_GREATER_THAN(start1, end2) ? 1 : 0;
    }
};

class RangeMarker {
public:
    // Mark the range in the map
    static void markRange(IntMap &rangeMap, INT start, INT end) {
        for (INT i = start; i <= end; ++i) {
            rangeMap[i]++;
        }
    }
};

class OverlapCalculator {
public:
    // Calculate the length of the overlap
    static INT calculateOverlapLength(const IntMap &rangeMap, INT minStart, INT maxEnd) {
        INT overlapLength = 0;
        INT leftBoundary = -1, rightBoundary = -1;

        for (INT i = minStart; i <= maxEnd; ++i) {
            if (rangeMap.at(i) == 2) {
                if (IS_EQUAL_TO(leftBoundary, -1)) {
                    leftBoundary = i;
                }
                rightBoundary = i;
                overlapLength++;
            }
        }

        if (IS_LESS_THAN(minStart, leftBoundary)) {
            overlapLength++;
        }
        if (IS_GREATER_THAN(maxEnd, rightBoundary)) {
            overlapLength++;
        }

        return overlapLength - 1;
    }
};

class RangeHandler {
private:
    INT start1, end1, start2, end2;

    // Adjust the range boundaries
    void adjustRangeBoundaries(INT &minStart, INT &maxEnd) const {
        minStart = MINIMUM(start1, start2);
        maxEnd = MAXIMUM(end1, end2);
    }

public:
    // Constructor
    RangeHandler(INT s1, INT e1, INT s2, INT e2) : start1(s1), end1(e1), start2(s2), end2(e2) {}

    // Get the final result
    INT computeResult() const {
        INT disjoint = RangeChecker::checkDisjoint(start1, end1, start2, end2);
        if (disjoint) return disjoint;

        INT minStart, maxEnd;
        adjustRangeBoundaries(minStart, maxEnd);

        IntMap rangeMap;
        RangeMarker::markRange(rangeMap, start1, end1);
        RangeMarker::markRange(rangeMap, start2, end2);

        return OverlapCalculator::calculateOverlapLength(rangeMap, minStart, maxEnd);
    }
};

/*khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
theme gelo adda
kome gelo thanda
jome gelo fanda
Ki dekhe bhaai…
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
le khoka le khoka le khoka …
khoka phire na takay khoka phire na takay khoka phire na takay…
oi.. khirki theke sobbai unki mare
tina mina ra sob preme pore
uphphph parina na na na na…..
jio mama ma ma ma ….
parina haa jio mama
dekho hiro ra khokar theke tips nite chai
khoka babu jai, lal juto paye
boro boro didira sob ha ha ha…
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
Bijli theke khoka biri jalai
sei birir chai sobbai hat pete ney
uphphph parina na na na na…..
jio mama ma ma ma ….
parina haa jio mama
dekho rajara khokake ese juto bendhe dey
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
Dadu gelo chomke
para gelo thomke
Dadu gelo chomke
para gelo thomke
matha gelo bomke
Ki dekhe bhaai…
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
le khoka le khoka le khoka
le khoka…
*/

// Function to process each test case
void processTestCase() {
    INT x1, y1, x2, y2;
/*khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
theme gelo adda
kome gelo thanda
jome gelo fanda
Ki dekhe bhaai…
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
le khoka le khoka le khoka …
khoka phire na takay khoka phire na takay khoka phire na takay…
oi.. khirki theke sobbai unki mare
tina mina ra sob preme pore
uphphph parina na na na na…..
jio mama ma ma ma ….
parina haa jio mama
dekho hiro ra khokar theke tips nite chai
khoka babu jai, lal juto paye
boro boro didira sob ha ha ha…
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
★♬★♫★♩★♪★♫★♬★♬★♫★♩★♪★♫★
Bijli theke khoka biri jalai
sei birir chai sobbai hat pete ney
uphphph parina na na na na…..
jio mama ma ma ma ….
parina haa jio mama
dekho rajara khokake ese juto bendhe dey
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
Dadu gelo chomke
para gelo thomke
Dadu gelo chomke
para gelo thomke
matha gelo bomke
Ki dekhe bhaai…
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
khoka babu jai, lal juto paye
boro boro didira sob, unki mere chai
le khoka le khoka le khoka
le khoka…
*/
    cin >> x1 >> y1 >> x2 >> y2;

    RangeHandler handler(x1, y1, x2, y2);
    INT result = handler.computeResult();
    
    PRINTLN(result);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    INT numTests;
    cin >> numTests;

    while (numTests--) {
        processTestCase();
    }

    return 0;
}
