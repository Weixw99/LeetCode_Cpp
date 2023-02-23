//
// Created by wxw on 23-2-23.
//

#include "hash_table.h"

vector<int> Solution349::intersection(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
    unordered_set<int> nums_set(nums1.begin(), nums1.end());
    for(int num : nums2){
        if(nums_set.find(num) != nums_set.end()){
            result_set.insert(num);
        }
    }
    return vector<int>(result_set.begin(), result_set.end());
}

int make_main349(){
    vector<int> nums1{1, 2, 2, 1, 4, 9, 5};
    vector<int> nums2{2, 2, 9, 4, 8, 4};
    Solution349 wxw;
    vector<int> me = wxw.intersection(nums1, nums2);
    for(int m : me)
        cout << m << ' ';
    return 0;
}