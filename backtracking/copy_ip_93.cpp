//
// Created by wxw on 23-3-27.
//
#include "backtracking.h"

bool isValid(const string& s){
    if(s.size()>1 && s[0] == '0') return false;
    int num = 0;
    for(auto tmp : s){
        if(tmp > '9' || tmp < '0') return false;
        num = num * 10 + (tmp - '0');
        if(num > 255) return false;
    }
    return true;
}

void Solution93::backtracking(std::string s, int startIndex) {
    if(path.size() == 4){
        string tmp = path[0] + "." + path[1] + "." + path[2] + "." + path[3];
        if(tmp.size() == s.size() + 3) result.push_back(tmp);
        return;
    }
    if(startIndex >= s.size()) return;
    for(int i = startIndex;i < s.size() && i - startIndex < 3;i++){
        string str = s.substr(startIndex, i - startIndex + 1);
        if(!isValid(str)) continue;
        path.push_back(str);
        backtracking(s, i + 1);
        path.pop_back();
    }
}

vector<string> Solution93::restoreIpAddresses(std::string s) {
    backtracking(s,0);
    return result;
}

int make_main93(){
    string s = "25525511135";
    Solution93 wxw;
    vector<string> me = wxw.restoreIpAddresses(s);
    return 0;
}