//
// Created by wxw on 23-4-3.
//
# include "greedy.h"

bool Solution55::canJump(vector<int> &nums) {
    int cover = 0;
    int goal = nums.size()-1;
    for(int i = 0; i <= cover;i++){
        cover = (cover - i > nums[i]) ? cover : nums[i] + i;
        if(cover >= goal) return true;
    }
    return false;
}

int make_main55(){
    vector<int> nums{3,2,1,0,4};
    Solution55 wxw;
    bool me = wxw.canJump(nums);
    return 0;
}