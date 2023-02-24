//
// Created by wxw on 23-2-24.
//
#include "hash_table.h"

// 取数值各个位上的单数之和
int Solution202::getSum(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool Solution202::isHappy(int n) {
    unordered_set<int> tmp_num;
    while (true) {
        n = getSum(n);
        if(n == 1){
            return true;
        }
        if (tmp_num.find(n) != tmp_num.end()){
            return false;
        }else{
            tmp_num.insert(n);
        }
    }

}

int make_main202(){
    int ww = 45;
    Solution202 wxw;
    bool me = wxw.getSum(ww);
    cout<< me << endl;
    return 0;
}