//
// Created by wxw on 23-2-21.
//
#include "linked_list.h"

ListNode* Solution19::removeNthFromEnd(ListNode* head, int n){

    ListNode* dummy_head = new ListNode(0);
    dummy_head->next = head;  //定义虚拟头结点
    ListNode* wxw = dummy_head;
    ListNode* tmp = dummy_head;
    int dis = 0;
    while (wxw->next){
        wxw = wxw->next;
        if(dis++ == n){
            tmp = tmp->next;
            dis--;
        }
    }
    ListNode* s = tmp->next;
    ListNode* tmp1 = tmp->next->next;
    tmp->next = tmp1;
    delete s;
    return (dummy_head->next);
}

int make_main19(){
    ListNode* dummy_head;
    dummy_head->next = nullptr;
    int list[] = {1, 2, 3, 4, 5};
    ListNode* wxw = dummy_head;

    for (int i=0;i<sizeof(list)/sizeof(list[0]);i++){
        ListNode* new_node = new ListNode(list[i]);
        while (wxw->next != nullptr){
            wxw = wxw->next;
        }
        wxw->next = new_node;
    }
    ListNode* ww = dummy_head;
    while (ww->next != nullptr){
        cout <<ww->next->val << " ";
        ww = ww->next;
    }
    cout << "\n";

    int n = 2;
    Solution19 w1;
    ListNode* wo = w1.removeNthFromEnd(dummy_head->next, n);

    ListNode* w2 = wo;
    while (w2 != nullptr){
        cout <<w2->val << " ";
        w2 = w2->next;
    }
    return 0;
}