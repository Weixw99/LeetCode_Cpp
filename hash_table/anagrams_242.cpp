//
// Created by wxw on 23-2-23.
//
#include "hash_table.h"

bool Solution242::isAnagram(const string& s, const string& t){
    int record[26] = {0};
    for (char i : s){
        record[i - 'a']++;
    }
    for (char i : t){
        record[i - 'a']--;
    }
    for (int i : record){
        if (i != 0)
            return false;
    }
    return true;
}

int make_main242(){
    string s = "anagram";
    string t = "nagaram";
    Solution242 wxw;
    bool me = wxw.isAnagram(s, t);
    cout << me ;
    return 0;
}