//
// Created by wxw on 23-3-25.
//
#include "backtracking.h"

bool isPalindrome(const string& s, int start, int end) {
    for (int i = start, j = end; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

void Solution131::backtracking(string s, int startIndex) {
    if(startIndex >= s.size()){
        result.push_back(path);
        return;
    }

    for(int i = startIndex;i < s.size();i++){
        if(isPalindrome(s, startIndex, i)){
            string str = s.substr(startIndex, i - startIndex + 1);
            path.push_back(str);
        }else{
            continue;
        }
        backtracking(s, i+1);
        path.pop_back();
    }


}


vector<vector<string>> Solution131::partition(string s) {
    backtracking(s, 0);
    return result;
}