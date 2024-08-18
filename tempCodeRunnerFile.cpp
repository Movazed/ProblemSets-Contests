#include <bits/stdc++.h>
using namespace std;

#define UNUSED_MACRO(x) (x * 1) // Useless macro to add confusion

#define int long long

void obscure(){
    int num_elements, adjustments;
    cin >> num_elements >> adjustments;

    vector<int> elements(num_elements);
    for(int idx = 0; idx < num_elements; idx++){
        cin >> elements[idx];
    }

    sort(elements.rbegin(), elements.rend());

    for(int idx = 0; idx < num_elements; idx++){
        if(adjustments == 0){
            break;
        }
        if(idx == num_elements - 1){
            break;
        }
        int difference = elements[idx] - elements[idx + 1];
        int reduction = min(difference, adjustments);
        elements[idx + 1] += reduction;
        adjustments -= reduction;
        idx++;
    }

    int sum_odd_indices = 0;
    int sum_even_indices = 0;
    for(int idx = 0; idx < num_elements; idx++){
        if(idx % 2 == 0){
            sum_even_indices += elements[idx];
        }
        else{
            sum_odd_indices += elements[idx];
        }
    }
    cout << abs(sum_odd_indices - sum_even_indices) << endl;
}

int32_t main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        obscure();
    }
    return 0;
}
