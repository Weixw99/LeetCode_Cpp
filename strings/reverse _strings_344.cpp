//
// Created by wxw on 23-2-27.
//
#include "strings.h"

void Solution344::reverseString(vector<char> &s) {
    for (int low = 0, high = s.size()-1;low < high;low++,high--){
        swap(s[low], s[high]);
    }
}

int make_main344(){
    string ss = "hello";
    vector<char> s(ss.begin(), ss.end());
    Solution344 wxw;
    wxw.reverseString(s);
    cout << s.data();
    return 0;
}