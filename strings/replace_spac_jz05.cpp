//
// Created by wxw on 23-3-1.
//
#include "strings.h"

string Solution_jz05::replaceSpace(std::string s) {
    int count = 0;
    string tmp = "%20";
    for (char ss : s){
        if(ss == ' '){
            count++;
        }
    }
    int low = s.size()-1;
    s.resize(s.size() + count*2);
    for (int high = s.size()-1; high > low;low--){
        if (s[low] != ' '){
            s[high] = s[low];
            high --;
        }else{
            for(int j = 2;j >= 0;j--, high--){
                s[high] = tmp[j];
            }
        }
    }
    return s;
}

int make_main_jz05(){
    string s = "We are happy.";
    Solution_jz05 wxw;
    string  me = wxw.replaceSpace(s);
    cout << me ;
    return 0;
}