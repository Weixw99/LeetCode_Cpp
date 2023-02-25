//
// Created by wxw on 23-2-25.
//
#include "hash_table.h"

vector<int> Solution1::twoSum(vector<int>& nums, int target){
    unordered_map<int, int> tmp_res;
    for(int i = 0; i < nums.size(); i++){
        auto iter = tmp_res.find(target - nums[i]);  //按照键查找，键是唯一的
        if (iter != tmp_res.end()){
            return {iter->second, i};
        }
        //使用pair创建键值对
        tmp_res.insert(pair<int, int>(nums[i], i));  //第一个是键，第二个是值，可能和平常认知相反
    }
    return {};

}

int make_main1(){
    vector<int> nums{3,3,6};
    int target = 9;
    Solution1 wxw;
    vector<int> me = wxw.twoSum(nums, target);
    for(int m : me)
        cout << m << ' ';
    return 0;
}