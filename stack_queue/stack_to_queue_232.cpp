//
// Created by wxw on 23-3-3.
//
#include "stack_queue.h"

MyQueue232::MyQueue232() {

}

void MyQueue232::push(int x) {
    stIn.push(x);
}

int MyQueue232::pop() {
    if (stOut.empty()){
        while(!stIn.empty()){
            stOut.push(stIn.top());
            stIn.pop();
        }
    }
    int tmp = stOut.top();
    stOut.pop();
    return tmp;
}

int MyQueue232::peek() {
    int tmp = pop();
    stOut.push(tmp);
    return tmp;
}

bool MyQueue232::empty() {
    return stOut.empty() && stIn.empty();

}

int make_main232(){


    return 0;
}