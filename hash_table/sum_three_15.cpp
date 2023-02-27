//
// Created by wxw on 23-2-27.
//
#include "hash_table.h"

vector<vector<int>> Solution15::threeSum(vector<int>& nums){
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size();i++){
        if (nums[i] > 0){
            break;
        }
        if (i > 0 && nums[i] == nums[i - 1]){
            continue;
        }
        int left = i+1, right = nums.size() - 1;
        while (left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if (sum > 0) right--;
            else if (sum < 0) left++;
            else{
                result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                while (right > left && nums[right] == nums[right - 1]) right--;
                while (right > left && nums[left] == nums[left + 1]) left++;
                right--;
                left++;
            }
        }
    }
    return result;


}

int make_main15(){
    vector<int> nums{-1,0,1,2,-1,-4};
    Solution15 wxw;
    vector<vector<int>> me = wxw.threeSum(nums);
    for (const vector<int>& ww : me){
        for(int w : ww){
            cout <<w << ' ';
        }
        cout<<'\n';
    }
    return 0;
}
