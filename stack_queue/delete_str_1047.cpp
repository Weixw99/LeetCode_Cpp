//
// Created by wxw on 23-3-5.
//
#include "stack_queue.h"

string Solution1047::removeDuplicates(std::string s) {
    stack<char> str;
    for (int i = 0;i < s.size();i++){
        if(str.empty()){
            str.push(s[i]);
        }else{
            if(s[i] == str.top()){
                str.pop();
            } else{
                str.push(s[i]);
            }
        }
    }
    string result;
    while(!str.empty()){
        result.push_back(str.top());
        str.pop();
    }
    reverse (result.begin(), result.end());
    return result;

}

int make_main1047(){
    string s = "abbaca";
    Solution1047 wxw;
    string me = wxw.removeDuplicates(s);
    cout<<me;
    return 0;
}