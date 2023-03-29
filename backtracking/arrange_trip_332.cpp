//
// Created by wxw on 23-3-29.
//
#include "backtracking.h"
//用了哈希表map做了机场映射，保持字母靠前的先被遍历
void Solution332::backtracking(vector<vector<std::string>> tickets, vector<bool> used) {
    if(path.size() == tickets.size()+1){
        result.push_back(path);
        return;
    }
    for(int i = 0;i < tickets.size();i++){
        if(used[i] || path.back() != tickets[i][0]) continue;
        path.push_back(tickets[i][1]);
        used[i] = true;
        backtracking(tickets, used);
        path.pop_back();
        used[i] = false;
    }

}

vector<string> Solution332::findItinerary(vector<vector<std::string>> &tickets) {
    vector<bool> used(tickets.size(), false);
    path.push_back("JFK");
    backtracking(tickets, used);
    vector<string> good_path = result[0];
    vector<string> candidate_path;
    for(int i = 1;i < result.size();i++){
        candidate_path = result[i];
        for(int k = 0;k < good_path.size();k++){
            if(good_path[k] != candidate_path[k]){
                for(int y = 0;y < good_path[k].size(); y++){
                    if(candidate_path[k][y] == good_path[k][y]) continue;
                    if(candidate_path[k][y] < good_path[k][y]){
                        good_path = candidate_path;
                    }break;
                }
                break;
            }
        }
    }
    return good_path;

}

int make_main332(){
    vector<vector<string>>  tickets = {{"JFK","ATL"},{"ORD","PHL"},{"JFK","ORD"},{"PHX","LAX"},{"LAX","JFK"}, {"PHL","ATL"}, {"ATL","PHX"}};
    Solution332 wxw;
    vector<string> me = wxw.findItinerary(tickets);
    return 0;
}
