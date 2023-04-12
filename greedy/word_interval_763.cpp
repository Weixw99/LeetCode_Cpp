//
// Created by wxw on 23-4-12.
//
# include "greedy.h"

vector<int> Solution763::partitionLabels(std::string s) {
    vector<int> result;
    vector<int>word(26, 0);
    for(int i = 0;i < s.size();i++){
        word[s[i] - 'a'] = i;
    }
    int left = 0, right = 0;
    for(int i = 0;i < s.size();i++){
        right = max(word[s[i]-'a'], right);

        if(right == i){
            result.push_back(right - left + 1);
            left = i+1;
        }
    }
    return result;
}
