//
// Created by wxw on 23-2-27.
//

#ifndef LEETCODE_CPP_STRINGS_H
#define LEETCODE_CPP_STRINGS_H
#include <iostream>
#include <vector>
#include <strings.h>
using namespace std;

/*******344、反转字符串********/
class Solution344 {
public:
    void reverseString(vector<char>& s);
};
int make_main344();

/*******541、反转字符串②********/
class Solution541 {
public:
    string reverseStr(string s, int k);
};
int make_main541();

/*******剑指offer05、替换空格********/
class Solution_jz05 {
public:
    string replaceSpace(string s);
};
int make_main_jz05();

/*******151、翻转字符串里的单词********/
class Solution151 {
public:
    string reverseWords(string s);
    void reverse(string& s, int start, int end);
};
int make_main151();

/*******58、左旋转字符串********/
class Solution_jz58 {
public:
    string reverseLeftWords(string s, int n);
};
int make_main_jz58();

/*******28、实现 strStr()********/
class Solution28 {
public:
    int strStr(string haystack, string needle);
    void getNext(int* next, const string& s);
};
int make_main28();

/*******459、重复的子字符串********/
class Solution459 {
public:
    bool repeatedSubstringPattern(string s);
    void getNext (int* next, const string& s);
};
int make_main459();

#endif //LEETCODE_CPP_STRINGS_H
