//
// Created by wxw on 23-3-31.
//
# include "greedy.h"

int Solution122::maxProfit(vector<int> &prices) {
    int total_price = 0;
    int buy = 0;
    int current_profit;
    for(int i = 0;i < prices.size();i++){
        if(buy == 0){
            buy = prices[i];
        }else{
            current_profit = prices[i] - buy;
            if(current_profit < 0){
                buy = prices[i];
            }else{
                total_price += current_profit;
                buy = prices[i];
            }
        }
    }
    return total_price;

}


int make_main122(){
    vector<int> prices{7,1,5,3,6,4};
    Solution122 wxw;
    int me = wxw.maxProfit(prices);
    cout << me;
    return 0;
}