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
    ListNode(int val):val(val), next(nullptr){}
};
bool InitList(ListNode* &L);
ListNode* list_tail(ListNode* L, vector<int> nu);


/**********203、移除链表元素***********/
class Solution203 {
public:
    ListNode* removeElements(ListNode *head, int val);
};
int make_main203();

/**********707、设计链表*************/
class MyLinkedList707 {
public:
    void MyLinkedList();  //初始化链表
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    void printLinkedList();
private:
    int size;
    ListNode* dummy_head;
};
int make_main707();

/**********206、反转链表*************/
class Solution206 {
public:
    ListNode* reverseList(ListNode* head);
};
int make_main206();

/**********24、两两交换链表中的节点*************/
class Solution24 {
public:
    ListNode* swapPairs(ListNode* head);
};
int make_main24();
#endif //LEETCODE_LINKED_LIST_H
