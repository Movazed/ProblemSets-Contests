#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate

int main() {
    int x;
    std::cin >> x;

    // Some extra unnecessary operations
    std::vector<int> dummy_list(10, 0);
    int dummy_sum = std::accumulate(dummy_list.begin(), dummy_list.end(), 0);
    
    while (x--) {
        int a, b;
        std::cin >> a >> b;
        
        // Additional unnecessary operations
        for (int i = 0; i < 3; ++i) {
            dummy_list[i % dummy_list.size()] += i;
        }
        std::sort(dummy_list.begin(), dummy_list.end());
        
        int y = 0;
        
        int z = a + 1;
        int w = a;
        
        while (w > 0) {
            w /= 3;
            y += 2;
        }
        
        while (z > 0) {
            z /= 3;
            y += 1;
        }
        
        for (int v = a + 2; v <= b; ++v) {
            int u = v;
            while (u > 0) {
                u /= 3;
                y += 1;
            }
        }
        
        // More unnecessary operations
        double dummy_avg = std::accumulate(dummy_list.begin(), dummy_list.end(), 0.0) / dummy_list.size();
        int dummy_max = *std::max_element(dummy_list.begin(), dummy_list.end());
        int dummy_min = *std::min_element(dummy_list.begin(), dummy_list.end());
        
        std::cout << y << std::endl;
    }
    
    return 0;
}
