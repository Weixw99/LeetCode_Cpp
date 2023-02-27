//
// Created by wxw on 23-2-27.
//
#include "hash_table.h"

bool Solution383::canConstruct(string ransomNote, string magazine){
    unordered_map<char, int> tmp1;
    for (char mag : magazine){
        tmp1[mag]++;
    }
    for (char ran : ransomNote){
        if(tmp1[ran] == 0){
            return false;
        }else{
            tmp1[ran]--;
        }
    }
    return true;
}

int make_main383(){
    string ransomNote = "aa";
    string magazine = "aab";
    Solution383 wxw;
    bool me = wxw.canConstruct(ransomNote, magazine);
    cout << me ;
    return 0;
}