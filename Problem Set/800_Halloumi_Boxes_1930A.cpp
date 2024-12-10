#include<bits/stdc++.h>

using namespace std;

void solve(){
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        /* code */
        int n, k;
        cin>> n >> k;

        vector<int> array(n);

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        if(k <= 1 && !is_sorted(array.begin(), array.end())){
            cout << "NO"<< endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
}

int main(){
    solve();
    return 0;
}