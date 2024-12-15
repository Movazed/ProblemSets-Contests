#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops") 
//#pragma GCC target("avx,avx2,avx512,fma") 

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
const int MAX_FACT = 1e5 + 5;  // Maximum size for factorials
int fact[MAX_FACT], ifact[MAX_FACT];

// -------------------------<RNG>------------------------- 
// RANDOM NUMBER GENERATOR
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());  
#define SHUF(v) shuffle(all(v), RNG); 
// Use mt19937_64 for 64 bit random numbers.


// ----------------------</BITWISE>-------------------------- 
/* a=target variable, b=bit number to act upon 0-n */
#define BIT_SET(a,b) ((a) |= (1ULL<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))

// '!!' to make sure this returns 0 or 1
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))

#define BITMASK_SET(x, mask) ((x) |= (mask))
#define BITMASK_CLEAR(x, mask) ((x) &= (~(mask)))
#define BITMASK_FLIP(x, mask) ((x) ^= (mask))
#define BITMASK_CHECK_ALL(x, mask) (!(~(x) & (mask)))
#define BITMASK_CHECK_ANY(x, mask) ((x) & (mask))
// ----------------------</BITWISE END>-------------------------- 
#define FOR(i, n) for (int i = 0; i < n; ++i)
#define FOR_RANGE(i, start, end) for (int i = start; i < end; ++i)
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define INIT_FREQ(n) vector<int> freq(n + 1, 0)  
#define INIT_B(n) vector<int> b(n, 0)             
#define INIT_MAX_FREQ() int max_freq = 0          
#define INIT_NEXT_NEW() int next_new = 1          


template <typename T>
void readArray(vector<T>& arr, int n) {
    FOR(i, n) {
        cin >> arr[i];
    }
}


template <typename T>
void initializeFreq(vector<T>& freq, int n) {
    fill(freq.begin(), freq.end(), 0);
}


void updateFreqAndMax(int needed, vector<int>& freq, int& max_freq) {
    freq[needed] += 1;
    max_freq = MAX(max_freq, freq[needed]);
}


int findNextNew(int next_new, const vector<int>& freq, int max_freq, int needed, int n) {
    FOR_RANGE(i, next_new, n + 1) {
        if (freq[i] == 0 && i != needed) {
            return i;
        }
    }
    return -1; 
}

template <typename T>
void processElement(int i, T needed, vector<T>& b, vector<int>& freq, int& max_freq, int& next_new) {
    if (i == 0) {

        b[i] = needed;
        freq[needed] = 1;
        max_freq = 1;
    } else {
        if (freq[needed] < max_freq) {
            b[i] = needed;
            updateFreqAndMax(needed, freq, max_freq);
        } else {

            if (max_freq == 0) {
                b[i] = needed;
                freq[needed] = 1;
                max_freq = 1;
            } else {

                int next = findNextNew(next_new, freq, max_freq, needed, freq.size() - 1);
                if (next != -1) {
                    b[i] = next;
                    updateFreqAndMax(next, freq, max_freq);
                } else {
                    b[i] = needed;
                    updateFreqAndMax(needed, freq, max_freq);
                }
            }
        }
    }
}







void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);  
    readArray(a, n);  

    INIT_FREQ(n);  
    INIT_B(n);     
    INIT_MAX_FREQ(); 
    INIT_NEXT_NEW(); 

    FOR(i, n) {
        int needed = a[i];  
        processElement(i, needed, b, freq, max_freq, next_new);
    }


    FOR(i, n) {
        if (i > 0) cout << " ";
        cout << b[i];
    }
    cout << "\n";
}


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
