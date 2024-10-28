#include<bits/stdc++.h> // include all the libraries of the c++ standard libraries
#include<vector>
#include<iostream>
#include<set>
#include<algorithm>
#include<cmath>

using namespace std;

int longestSquareStreaks(vector<int>&nums){
	sort(nums.begin(), nums.end());
	
	set<int> numSet(nums.begin(), nums.end());
	
	int maxStreak = -1;
	
	for(int num : nums){
		int streakLength = 1;
		int current = num;
		
		while(numSet.find(current * current) != numSet.end()){
			current *= current;  //NEXT SQUARE interations
			streakLength++;
			}
			
			maxStreak = max(maxStreak, streakLength);
			}
			return maxStreak >= 2 ? maxStreak : -1;
}

int main(){
	vector<int> nums = {4, 3, 6, 16, 8, 2};
	
	cout<<"Output:"<<longestSquareStreaks(nums)<<endl;
	return 0;
}