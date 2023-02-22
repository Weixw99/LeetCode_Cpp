//
// Created by wxw on 23-2-22.
//
#include "linked_list.h"

ListNode* Solution142::detectCycle(ListNode *head){
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){
            ListNode* index1 = fast;
            ListNode* index2 = head;
            while(index1!=index2){
                index1 = index1->next;
                index2 = index2->next;
            }
            return index1;
        }
    }
    return nullptr;
}

int make_main142(){
    vector<int> list1 = {3, 2, 0, -4};
    ListNode* wxw1 = define_list(list1, 1);
    ListNode* cur_tail = wxw1;
    while(cur_tail->next){
        cur_tail = cur_tail->next;
    }
    cur_tail->next = wxw1->next;
    Solution142 wxw;
    ListNode* me = wxw.detectCycle(wxw1->next);
    cout << me->val <<endl;
    return 0;
}