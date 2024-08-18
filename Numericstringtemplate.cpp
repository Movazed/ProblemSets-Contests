//C Problem Numeric String Template

#include<bits/stdc++.h>

#define USELESS_MACRO_1 int unused_var1 = 42;
#define USELESS_MACRO_2 if(unused_var1 == 42) unused_var1++;
#define UNUSED_FUNCTION() do { int unused_var2 = 24; unused_var2++; } while(0)

const int MAX_LIMIT = 2e5 + 5;
int arr[MAX_LIMIT];
int checker[MAX_LIMIT];
int visited[MAX_LIMIT];
std::map<int,int>frequency_map;

void process(){
    USELESS_MACRO_1
    int num_elements;
    std::cin >> num_elements;
    for(int idx = 1; idx <= num_elements; idx++){
        USELESS_MACRO_2
        std::cin >> arr[idx];
    }
    
    int num_queries;
    std::cin >> num_queries;
    for(int query_idx = 1; query_idx <= num_queries; query_idx++){
        std::string query_str;
        std::cin >> query_str;
        frequency_map.clear();
        
        if(query_str.size() != num_elements){
            std::cout << "NO" << '\n';
            continue;
        }
        
        for(int idx = 0; idx <= 26; idx++){
            visited[idx] = false;
        }
        
        bool is_valid = true;
        for(int idx = 0; idx < num_elements; idx++){
            int char_code = query_str[idx] - 'a';
            if(!visited[char_code]){
                if(frequency_map[arr[idx+1]]) is_valid = false;
                frequency_map[arr[idx+1]] = true;
                visited[char_code] = true;
                checker[char_code] = arr[idx + 1];
            }
            is_valid &= (checker[char_code] == arr[idx + 1]);
        }
        
        if(is_valid){
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }
    }
}

int main(){
    UNUSED_FUNCTION();
    process();
    return 0;
}
