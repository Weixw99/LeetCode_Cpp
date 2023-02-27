//
// Created by wxw on 23-2-22.
//

#ifndef LEETCODE_CPP_HASH_TABLE_H
#define LEETCODE_CPP_HASH_TABLE_H

#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <algorithm>
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

/*******202、快乐数********/
class Solution202 {
public:
    int getSum(int n);
    bool isHappy(int n);
};
int make_main202();

/*******1、两数之和********/
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};
int make_main1();

/*******454、四数相加********/
class Solution454 {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4);
};
int make_main454();

/*******383、赎金信********/
class Solution383 {
public:
    bool canConstruct(string ransomNote, string magazine);
};
int make_main383();

/*******15、三数之和********/
class Solution15 {
public:
    vector<vector<int>> threeSum(vector<int>& nums);
};
int make_main15();

/*******18、四数之和********/
class Solution18 {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target);
};
int make_main18();

#endif //LEETCODE_CPP_HASH_TABLE_H
