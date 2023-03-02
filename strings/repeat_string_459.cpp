//
// Created by wxw on 23-3-2.
//
#include "strings.h"

void Solution459::getNext(int *next, const std::string &s) {
    next[0] = 0;
    int j = 0;
    for(int i = 1;i < s.size(); i++){
        while(j > 0 && s[i] != s[j]) {
            j = next[j - 1];
        }
        if(s[i] == s[j]) {
            j++;
        }
        next[i] = j;
    }
}

bool Solution459::repeatedSubstringPattern(std::string s) {
    int next[s.size()];
    getNext(next, s);
    int len = s.size();
    if (next[len - 1] != 0 && len % (len - (next[len - 1] )) == 0) {
        return true;
    }
    return false;
}

int make_main459(){
    string s = "abab";
    Solution459 wxw;
    bool me = wxw.repeatedSubstringPattern(s);
    cout << me;
    return 0;
}
