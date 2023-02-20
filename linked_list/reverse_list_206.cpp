//
// Created by wxw on 23-2-20.
//
#include "linked_list.h"

ListNode* Solution206::reverseList(ListNode *head) {
    ListNode* wxw = head;
    ListNode* pre = nullptr;  //保存上一个节点
    ListNode* temp;  //暂存下一个节点
    while(wxw){
        temp = wxw->next;
        wxw->next = pre;
        pre = wxw;
        wxw = temp;
    }
    return pre;
}

int make_main206(){
    ListNode* dummy_head;
    dummy_head->next = nullptr;
    int list[] = {1, 2, 5};
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
    Solution206 w1;

    ListNode* wo = w1.reverseList(dummy_head->next);

    ListNode* w2 = wo;
    while (w2 != nullptr){
        cout <<w2->val << " ";
        w2 = w2->next;
    }
    return 0;
}