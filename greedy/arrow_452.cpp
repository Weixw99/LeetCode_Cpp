//
// Created by wxw on 23-4-7.
//
# include "greedy.h"

static bool cmp(vector<int>& a, vector<int>& b){
    return a[0] < b[0];
}

int Solution452::findMinArrowShots(vector<vector<int>> &points) {
    sort(points.begin(), points.end(), cmp);
    int arrow = 0;
    for(int i = 1;i < points.size();i++){
        if(points[i][0] > points[i-1][1]){
            arrow++;
        }else{
            points[i][1] = min(points[i-1][1], points[i][1]);
        }
    }
    return arrow;
}