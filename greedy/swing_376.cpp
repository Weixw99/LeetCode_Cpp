//
// Created by wxw on 23-3-30.
//
# include "greedy.h"

int Solution376::wiggleMaxLength(vector<int> &nums) {
    bool is_bool;
    int num = 1;
    int pre = nums[0];
    for(int i = 1;i < nums.size();i++){
        if(num == 1){
            if(nums[i] - pre > 0){
                is_bool = true;
                num++;
                pre = nums[i];
            }
            else if(nums[i] - pre < 0){
                is_bool = false;
                num++;
                pre = nums[i];
            }
            else{
                pre = nums[i];
                continue;
            }
        } else{
            if((!is_bool && nums[i] - pre > 0) || (is_bool && nums[i] - pre < 0)){
                is_bool = !is_bool;
                num++;
                pre = nums[i];
            }else{
                pre = nums[i];
                continue;
            }
        }
    }
    return num;
}

int make_main376(){
    vector<int> nums{33,53,12,64,50,41,45,21,97,35,47,92,39,0,93,55,40,46,69,42,6,95,51,68,72,9,32,84,34,64,6,2,26,98,3,43,30,60,3,68,82,9,97,19,27,98,99,4,30,96,37,9,78,43,64,4,65,30,84,90,87,64,18,50,60,1,40,32,48,50,76,100,57,29,63,53,46,57,93,98,42,80,82,9,41,55,69,84,82,79,30,79,18,97,67,23,52,38,74,15};
    Solution376 wxw;
    int me = wxw.wiggleMaxLength(nums);
    cout << me;
    return 0;
}