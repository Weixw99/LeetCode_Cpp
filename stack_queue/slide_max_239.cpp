//
// Created by wxw on 23-3-6.
//
#include "stack_queue.h"

void Solution239::MyQueue::pop(int value) {
    if(que.front() == value && !que.empty()){
        que.pop_front();
    }
}
void Solution239::MyQueue::push(int value) {
    while(!que.empty() && value > que.back()){
        que.pop_back();
    }
    que.push_back(value);
}
int Solution239::MyQueue::front() {
    return que.front();
}

vector<int> Solution239::maxSlidingWindow(vector<int> &nums, int k) {
    MyQueue que;
    vector<int> result;
    for(int i = 0;i < k;i++){
        que.push(nums[i]);
    }
    result.push_back(que.front());
    for(int i = k;i <nums.size();i++){
        que.pop(nums[i-k]);
        que.push(nums[i]);
        result.push_back(que.front());
    }
    return result;
}

int make_main239(){
    vector<int> nums{1,3,-1,-3,5,3,6,7};
    int k = 3;
    Solution239 wxw;
    vector<int> me = wxw.maxSlidingWindow(nums, k);
    for(int num : me)
        cout<< num << ' ';
    return 0;
}