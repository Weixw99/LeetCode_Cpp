//
// Created by wxw on 23-2-27.
//
#include "hash_table.h"

vector<vector<int>> Solution18::fourSum(vector<int>& nums, int target){
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int right_num = nums[nums.size() - 1];
    for (int i = 0;i < nums.size(); i++){
        if(right_num > target && nums[i] > 0){
            break;
        }
        if(i > 0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j = i+1;j < nums.size();j++){
            if (j > i+1 && nums[j] == nums[j-1]){
                continue;
            }
            int left = j+1, right = nums.size() - 1;
            while(left < right){
                //int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if ((long) nums[i] + nums[j] + nums[left] + nums[right] > target) right--;
                else if ((long) nums[i] + nums[j] + nums[left] + nums[right] < target) left++;
                else{
                    result.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                    while(left < right && nums[right] == nums[right-1]) right--;
                    while(left < right && nums[left] == nums[left+1]) left++;
                    left++;
                    right--;
                }
            }
        }
    }
    return result;
}

int make_main18(){
    vector<int>nums{0,0,0,1000000000,1000000000,1000000000,1000000000};
    int target = 1000000000;
    Solution18 wxw;
    vector<vector<int>> me = wxw.fourSum(nums, target);

    for (const vector<int>& ww : me){
        for(int w : ww){
            cout <<w << ' ';
        }
        cout<<'\n';
    }
    return 0;
}