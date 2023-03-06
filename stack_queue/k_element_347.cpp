//
// Created by wxw on 23-3-6.
//
#include "stack_queue.h"

vector<int> Solution347::topKFrequent(vector<int> &nums, int k) {
    unordered_map <int, int> count;
    for(int num:nums){
        count[num]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, my_comparison> pri_que;
    for(unordered_map<int, int>::iterator it = count.begin();it != count.end();it++){
        pri_que.push(*it);
        if (pri_que.size() > k){
            pri_que.pop();
        }
    }
    vector<int> result(k);
    for(int i = k-1;i >= 0;i--){
        result[i] = pri_que.top().first;
        pri_que.pop();
    }
    return result;
}

int make_main347(){
    vector<int> nums{1,1,1,2,2,3};
    int k = 2;
    Solution347 wxw;
    vector<int> me = wxw.topKFrequent(nums, k);
    for(int num : me)
        cout<< num << ' ';
    return 0;
}