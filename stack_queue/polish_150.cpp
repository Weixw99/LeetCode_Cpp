//
// Created by wxw on 23-3-5.
//
#include "stack_queue.h"

int Solution150::evalRPN(vector<std::string> &tokens) {
    stack<long long> num;
    long long res;
    for(int i = 0;i < tokens.size();i++){
        if (tokens[i] == "+"||tokens[i] == "-"||tokens[i] == "*"||tokens[i] == "/"){
            long long num2 = num.top();
            num.pop();
            long long num1 = num.top();
            num.pop();
            if (tokens[i] == "+") res = num1 + num2;
            else if (tokens[i] == "-") res = num1 - num2;
            else if (tokens[i] == "*") res = num1 * num2;
            else if (tokens[i] == "/") res = num1 / num2;
            num.push(res);
        }else{
            num.push(stoll(tokens[i]));
        }
    }
    return num.top();
}

int make_main150(){


    return 0;
}