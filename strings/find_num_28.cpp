//
// Created by wxw on 23-3-2.
//
#include "strings.h"

void Solution28::getNext(int *next, const std::string &s) {
    int j = 0;
    next[0] = 0;
    for(int i = 1; i < s.size(); i++) { // 注意i从1开始
        while (j != 0  && s[i] != s[j]) { // 前后缀不相同了
            j = next[j-1];
        }
        if (s[i] == s[j]) { // 找到相同的前后缀
            j++;
        }
        next[i] = j; // 将j（前缀的长度）赋给next[i]
    }
}

int Solution28::strStr(std::string haystack, std::string needle) {
    //计算next数组
    int next[needle.size()];
    getNext(next, needle);
    int j = 0; // // 因为next数组里记录的起始位置为-1
    for (int i = 0; i < haystack.size(); i++) { // 注意i就从0开始
        while (j!=0 && haystack[i] != needle[j])
            j = next[j-1];
        if (haystack[i] == needle[j]){
            j++;
        }
        if(j == needle.size()){
            return i -needle.size() + 1;
        }
    }
    return -1;
}

int make_main28(){
    string haystack =  "sabutsasad";
    string needle = "abab";
    Solution28 wxw;
    int me = wxw.strStr(haystack, needle);
    cout << me;
    return 0;
}