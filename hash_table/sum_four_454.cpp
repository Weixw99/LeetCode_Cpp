//
// Created by wxw on 23-2-26.
//
#include "hash_table.h"

int Solution454::fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4) {
    int count = 0;
    unordered_map<int, int> add_nums;
    for (int num1 : nums1){
        for (int num2 : nums2){
            add_nums[num1 + num2]++;
        }
    }

    for (int num3 : nums3){
        for (int num4 : nums4){
            auto iter = add_nums.find(-(num3+num4));
            if (iter != add_nums.end()){
                count += iter->second;
            }
        }
    }
    return count;
}

int make_main454() {

    vector<int> nums1{1, 2};
    vector<int> nums2{-2, -1};
    vector<int> nums3{-1, 2};
    vector<int> nums4{0, 2};

    Solution454 wxw;
    int me = wxw.fourSumCount(nums1, nums2, nums3, nums4);
    cout << me;

}