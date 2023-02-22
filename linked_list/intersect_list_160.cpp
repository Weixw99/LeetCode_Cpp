//
// Created by wxw on 23-2-22.
//
#include "linked_list.h"

ListNode* Solution160::getIntersectionNode(ListNode *headA, ListNode *headB){
    ListNode* wxwA = headA;
    ListNode* wxwB = headB;
    while(wxwA){
        while(wxwB){
            if (wxwA == wxwB){
                return wxwA;
            }
            wxwB = wxwB->next;
        }
        wxwA = wxwA->next;
        wxwB = headB;
    }
    return nullptr;
}

int make_main160(){
    vector<int> list1 = {1, 9, 1};
    ListNode* wxw1 = define_list(list1);

    vector<int> list2 = {3, 2};
    ListNode* wxw2 = define_list(list2);

    vector<int> list3 = {8, 4, 5};
    ListNode* wxw3 = define_list(list3);

    ListNode* ww13 = wxw1;
    while(ww13->next){
        ww13 = ww13->next;
    }
    ww13->next = wxw3;

    ListNode* ww23 = wxw2;
    while(ww23->next){
        ww23 = ww23->next;
    }
    ww23->next = wxw3;

    Solution160 cur;
    ListNode* res_cur = cur.getIntersectionNode(wxw1, wxw2);
    print_list(res_cur);
    return 0;
}
