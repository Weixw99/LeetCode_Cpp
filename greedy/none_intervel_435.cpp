//
// Created by wxw on 23-4-11.
//
# include "greedy.h"

static bool cmp(vector<int>& a, vector<int>& b){
    if(a[0] == b[0]) return a[1] < b[1];
    else return a[0] < b[0];
}
int Solution435::eraseOverlapIntervals(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end(), cmp);
    int result = 1;
    int right = intervals[0][1];
    for(int i = 1;i < intervals.size();i++){
        if(intervals[i][0] >= right){
            right = intervals[i][1];
        }else{
            result++;
            right = min(intervals[i][1], right);
        }
    }
    return result;

}