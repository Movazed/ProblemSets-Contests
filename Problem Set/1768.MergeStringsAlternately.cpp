#include<iostream>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result ="";
        int i = 0;
        while((i < word1.length()) || ( i < word2.length())){
            if(i < word1.length()) {
                result += word1[i];
            }
            if ( i < word2.length()) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

int main(){

    Solution sol;
    string result_merge;
    string word1, word2;

    cout<<"Enter the first word : "<<endl;
    cin>>word1;
    cout<<"Enter the second word : "<<endl;
    cin>>word2;

    result_merge = sol.mergeAlternately(word1, word2);

    cout<<"The output is: "<<result_merge<<endl;
}