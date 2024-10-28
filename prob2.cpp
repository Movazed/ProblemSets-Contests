#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int compression(vector<char>& chars){
	int write = 0;
	int i = 0;
	
	while(i < chars.size()){
		char current_Charachter = chars[i];
		int count = 0;
		
		while(i <chars.size() && chars[i] == current_Charachter){
		i++;
		count++;
		}
		
		chars[write++] = current_Charachter;
		
		if(count > 1) { 
			for(char c: to_string(count)){
			chars[write++] = c;
			}
		}
	}
	
	
	return write;
}