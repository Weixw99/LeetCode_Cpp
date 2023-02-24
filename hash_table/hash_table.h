//
// Created by wxw on 23-2-22.
//

#ifndef LEETCODE_CPP_HASH_TABLE_H
#define LEETCODE_CPP_HASH_TABLE_H

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*******242、有效的字母异位词********/
class Solution242 {
public:
    bool isAnagram(const string& s, const string& t);
};
int make_main242();


/*******349、两个数组的交集********/
class Solution349 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
};
int make_main349();

/*******349、两个数组的交集********/
class Solution202 {
public:
    int getSum(int n);
    bool isHappy(int n);
};
int make_main202();

#endif //LEETCODE_CPP_HASH_TABLE_H
