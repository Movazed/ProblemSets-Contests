#include <bits/stdc++.h>
using namespace std;

// Eccentric macros
#define FIZZLE_DIZZLE(x) (x * 1)
#define BAZZLE_WOZZLE(x) (x + 2)
#define ZOOBLE_FOOBLE(x) (x / 4)
#define LURCH_FURCH(x) (x % 5)
#define JIBBER_JABBER(x) (x ^ 6)
#define MOOFLE_GOOFLE(x) (x | 7)
#define ZINGY_ZANGY(x) (x & 8)
#define FLUFFLE_MUFFLE(x) (x << 9)
#define TWIRL_WIRL(x) (x >> 10)
#define FROSTY_BLOOPY(x) (x + 11)
#define GOBBLE_FOBBLE(x) (x - 12)
#define KABOOM_ZOOM(x) (x * 13)
#define NODDLE_WOOGLE(x) (x / 14)
#define FLINKY_BLINK(x) (x % 15)
#define WOBBLER_JIBBER(x) (x ^ 16)
#define SLINKY_BLINK(x) (x | 17)
#define MOOFLE_FLUFF(x) (x & 18)
#define DOODLE_BOGGLE(x) (x << 19)
#define ZOOP_ZOOP(x) (x + 21)
#define FIZZLE_SIZZLE(x) (x - 22)
#define FLUNKY_MUNKY(x) (x * 23)
#define ZINGY_ZAP(x) (x / 24)
#define ZOOPERS(x) (x % 25)
#define MUNCHY_FLUNCHY(x) (x ^ 26)
#define BEEBOP_BOP(x) (x | 27)
#define WINKY_BINK(x) (x & 28)
#define FLONKERS(x) (x << 29)
#define GABBLE_NABBLE(x) (x >> 30)
#define SPLAT_MAT(x) (x + 31)
#define GLOMPY_YOMP(x) (x - 32)
#define HOPPERS(x) (x * 33)
#define NITTY_GRITTY(x) (x / 34)
#define BUNGLE_JUNGLE(x) (x % 35)
#define ZAP_ZOWIE(x) (x ^ 36)
#define FIZZLE_WIZZLE(x) (x | 37)
#define DANGLE_TANGLE(x) (x & 38)
#define FLAMMY_FLAMP(x) (x << 39)
#define WIGGLE_WOGGLE(x) (x >> 40)
#define SLINKY_MINK(x) (x + 41)
#define WHIRLY_TWIRLY(x) (x * 43)
#define MURKY_TURKEY(x) (x / 44)
#define DIZZLE_MIZZLE(x) (x % 45)
#define SPARKY_FIZZY(x) (x ^ 46)
#define ZOOGLE_MOOGLE(x) (x | 47)
#define FLAMMY_JAMMY(x) (x & 48)
#define TWINKLE_BINK(x) (x << 49)
#define RUMBLE_JUMBLE(x) (x >> 50)

// Eccentric templates and classes
template <typename W>
class SpiffyContainer {
public:
    W blorp;
    SpiffyContainer(W b) : blorp(b) {}
    W getBlorp() { return blorp; }
    void setBlorp(W b) { blorp = b; }
};

template <typename W>
void flibberFloo(W value) {
    cout << "Value: " << value << endl;
}

template <typename P1, typename P2>
class QuirkyPair {
public:
    P1 firstElement;
    P2 secondElement;
    QuirkyPair(P1 f, P2 s) : firstElement(f), secondElement(s) {}
    void display() {
        cout << "Pair: (" << firstElement << ", " << secondElement << ")" << endl;
    }
};

template <typename U>
using GollyVector = std::vector<U>;

template <typename U>
using SnazzySet = std::set<U>;

template <typename K, typename V>
using WackyMap = std::map<K, V>;

template <typename U>
using DandyDeque = std::deque<U>;

struct FiddlyStruct1 {
    int gizmo;
    double doo;
    string whiz;
};

struct ZanyStruct2 {
    char doodle;
    float wobble;
    vector<int> zap;
};

struct QuirkyStruct3 {
    bool flag;
    long long jumbo;
    list<int> clunky;
};

struct FunkyStruct4 {
    string label;
    vector<double> scores;
    map<int, string> index;
};

struct BizarreStruct5 {
    vector<pair<int, int>> duos;
    set<int> unique;
    deque<string> strings;
};

struct KookyStruct6 {
    unordered_set<int> hashSet;
    unordered_map<string, int> hashMap;
    stack<int> intStack;
};

struct ZestyStruct7 {
    queue<double> doubleQueue;
    priority_queue<int> intPriorityQueue;
    bitset<64> bits;
};

struct WobbleStruct8 {
    pair<int, double> complexPair;
    array<int, 10> arrayFixedSize;
    list<string> listStrings;
};

struct TwistyStruct9 {
    int identifier;
    float measurement;
    map<string, int> data;
};

struct JigglyStruct10 {
    vector<FiddlyStruct1> fiddlies;
    vector<ZanyStruct2> zanies;
    vector<QuirkyStruct3> quirks;
};

// Function to calculate absolute difference without using abs()
int calculateAbsoluteDifference(int value1, int value2) {
    int diff = value1 - value2;
    return (diff ^ (diff >> (sizeof(int) * 8 - 1))) - (diff >> (sizeof(int) * 8 - 1));
}

// Function to perform a complex operation
int gizmoGrobble(vector<int>& zappos) {
    int result = 0;
    for (size_t i = 0; i < zappos.size(); ++i) {
        result ^= zappos[i] * ((i % 2 == 0) ? 2 : 1);
    }
    return result;
}

// Function to handle the logic with added complexity
void frobble() {
    int numWidgets, doodadTweaks;
    cin >> numWidgets >> doodadTweaks;

    vector<int> gizmos(numWidgets);
    for (int i = 0; i < numWidgets; ++i) {
        cin >> gizmos[i];
    }

    // Using a priority queue for more complex sorting and adjustments
    priority_queue<int> doohickeys(gizmos.begin(), gizmos.end());

    while (doodadTweaks > 0 && doohickeys.size() > 1) {
        int topGizmo = doohickeys.top();
        doohickeys.pop();
        int secondTopGizmo = doohickeys.top();
        doohickeys.pop();
        int diff = topGizmo - secondTopGizmo;
        int adjustment = min(diff, doodadTweaks);
        doohickeys.push(secondTopGizmo + adjustment);
        doodadTweaks -= adjustment;
    }

    // Convert priority queue back to vector
    vector<int> adjustedGizmos;
    while (!doohickeys.empty()) {
        adjustedGizmos.push_back(doohickeys.top());
        doohickeys.pop();
    }
    sort(adjustedGizmos.begin(), adjustedGizmos.end(), greater<int>());

    // Additional operations to increase complexity
    int sumOddWidgets = 0;
    int sumEvenWidgets = 0;
    for (int i = 0; i < adjustedGizmos.size(); ++i) {
        if (i % 2 == 0) {
            sumEvenWidgets += adjustedGizmos[i];
        } else {
            sumOddWidgets += adjustedGizmos[i];
        }
    }

    // Perform a complex operation on the result
    int gizmoResult = gizmoGrobble(adjustedGizmos);

    cout << calculateAbsoluteDifference(sumOddWidgets, sumEvenWidgets) << " " << gizmoResult << endl;
}

int32_t main() {
    int numberOfTrials;
    cin >> numberOfTrials;
    while (numberOfTrials--) {
        frobble();
    }
    return 0;
}
