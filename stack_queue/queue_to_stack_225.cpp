//
// Created by wxw on 23-3-3.
//
#include "stack_queue.h"

MyStack225::MyStack225() {}

void MyStack225::push(int x) {
    que1.push(x);

}
int MyStack225::pop() {
    int size = que1.size();
    while (--size){
        que2.push(que1.front());
        que1.pop();
    }
    int result = que1.front();
    que1.pop();
    int size2 = que2.size();
    while(size2--){
        que1.push(que2.front());
        que2.pop();
    }
    return result;
}
int MyStack225::top() {
    int tmp = pop();
    que1.push(tmp);
    return tmp;
}

bool MyStack225::empty() {
    return que1.empty();
}