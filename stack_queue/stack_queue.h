//
// Created by wxw on 23-3-3.
//

#ifndef LEETCODE_CPP_STACK_QUEUE_H
#define LEETCODE_CPP_STACK_QUEUE_H
#include <iostream>
#include <algorithm>
using namespace std;
#include <stack>
#include <queue>
#include "unordered_map"

/*******232. 用栈实现队列********/
class MyQueue232 {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue232();
    void push(int x);
    int pop();
    int peek();
    bool empty();
};
int make_main232();

/*******225. 用队列实现栈********/
class MyStack225 {
public:
    queue<int> que1;
    queue<int> que2;
    MyStack225();
    void push(int x);
    int pop();
    int top();
    bool empty();
};
int make_main225();
/*******20. 有效的括号********/
class Solution20 {
public:
    bool isValid(string s);
};
int make_main20();

/*******1047. 删除字符串中的所有相邻重复项********/
class Solution1047 {
public:
    string removeDuplicates(string s);
};
int make_main1047();

/*******150. 逆波兰表达式求值********/
class Solution150 {
public:
    int evalRPN(vector<string>& tokens);
};
int make_main150();

/*******239. 滑动窗口最大值********/
class Solution239 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
private:
    class MyQueue{
    public:
        deque<int> que;
        void pop(int value);
        void push(int value);
        int front();
    };
};
int make_main239();

/*******347.前 K 个高频元素********/
class Solution347 {
public:
    vector<int> topKFrequent(vector<int>& nums, int k);
    class my_comparison {  //自定义小顶堆的比较方式
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };
};
int make_main347();

#endif //LEETCODE_CPP_STACK_QUEUE_H
