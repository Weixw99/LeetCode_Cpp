//
// Created by wxw on 23-2-18.
//
#ifndef LEETCODE_LINKED_LIST_H
#define LEETCODE_LINKED_LIST_H
#include <iostream>
#include <vector>
using namespace std;

/*******初始化链表声明********/
struct ListNode{
    int val;
    ListNode *next;
};
bool InitList(ListNode* &L);
ListNode* list_tail(ListNode* L, vector<int> nu);


class Solution203 {
public:
    ListNode* removeElements(ListNode *head, int val);
};
int make_main203();
#endif //LEETCODE_LINKED_LIST_H
