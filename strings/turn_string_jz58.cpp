//
// Created by wxw on 23-3-2.
//
#include "strings.h"

string Solution_jz58::reverseLeftWords(std::string s, int n) {
    for(int i = 0, j = s.size()-1;i < j;i++, j--){
        swap(s[i], s[j]);
    }
    for(int i = 0, j = s.size()-n-1;i < j;i++, j--){
        swap(s[i], s[j]);
    }
    for(int i = s.size()-n, j = s.size()-1;i < j;i++, j--){
        swap(s[i], s[j]);
    }
    return s;
}

int make_main_jz58(){
    string s = "abcdefg";
    int n = 2;
    Solution_jz58 wxw;
    string me = wxw.reverseLeftWords(s, n);
    cout << me;
    return 0;
}