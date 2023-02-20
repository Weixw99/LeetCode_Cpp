//
// Created by wxw on 23-2-20.
//
#include "linked_list.h"


ListNode* Solution24::swapPairs(ListNode* head){
    ListNode* wxw = head;
    ListNode* true_head = head;
    ListNode* pre = nullptr;
    ListNode* tmp;
    while (wxw && wxw->next != nullptr){
        tmp = wxw->next->next;
        if (!pre) {
            true_head = wxw->next;
            wxw->next->next = wxw;
            wxw->next = tmp;
            pre = wxw;
        } else{

            wxw->next->next = wxw;
            pre->next = wxw->next;
            wxw->next = tmp;
            pre = wxw;
        }
        wxw = tmp;
    }
    return true_head;
}

int make_main24(){
    ListNode* dummy_head;
    dummy_head->next = nullptr;
    int list[] = {1, 2, 5, 8};
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
    Solution24 w1;

    ListNode* wo = w1.swapPairs(dummy_head->next);

    ListNode* w2 = wo;
    while (w2 != nullptr){
        cout <<w2->val << " ";
        w2 = w2->next;
    }
    return 0;
}