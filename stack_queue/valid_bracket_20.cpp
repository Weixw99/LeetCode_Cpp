//
// Created by wxw on 23-3-5.
//
#include "stack_queue.h"

bool Solution20::isValid(std::string s) {
    int len = s.size();
    if (len % 2 != 0){
        return false;
    }
    stack<char> st;
    for(int i = 0;i < len;i++){
        if(s[i] == '(') st.push(')');
        else if(s[i] == '[') st.push(']');
        else if(s[i] == '{') st.push('}');
        else if(st.empty()) return false;
        else{
            if(s[i] == st.top()){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();

}

int make_main20(){
    string s = "((";
    Solution20 wxw;
    bool me = wxw.isValid(s);
    cout << me;
    return 0;
}