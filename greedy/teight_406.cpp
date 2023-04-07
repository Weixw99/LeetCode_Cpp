//
// Created by wxw on 23-4-7.
//
# include "greedy.h"

static bool cmp(vector<int> a, vector<int> b) {
    if(a[0] == b[0]) return a[1] < b[1];
    else return a[0] > b[0];
}
vector<vector<int>> Solution406::reconstructQueue(vector<vector<int>> &people) {
    vector<vector<int>> result;
    sort(people.begin(), people.end(), cmp);
    for(int i = 0; i < people.size();i++){
        if(people[i][1] == i) result.push_back(people[i]);
        else result.insert(result.begin() + people[i][1], people[i]);
    }
    return result;
}