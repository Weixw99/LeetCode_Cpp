//
// Created by wxw on 23-4-3.
//
# include "greedy.h"

int Solution45::jump(vector<int> &nums) {
    int cover = 0, count = 0;
    int next_cover = 0;
    for(int i = 0; i <= nums.size();i++){
        next_cover = max(nums[i] + i, next_cover);
        if(i == cover){
            if(cover < nums.size()-1){
                count++;
                cover = next_cover;
                if(cover >= nums.size()-1) break;
            }else break;

        }
    }
    return count;
}

int make_main45(){
    vector<int> nums{1,2,1,1,1};
    Solution45 wxw;
    bool me = wxw.jump(nums);
    return 0;
}