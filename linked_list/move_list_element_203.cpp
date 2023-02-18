//
// Created by wxw on 23-2-18.
//
#include "linked_list.h"

ListNode* Solution203::removeElements(ListNode *head, int val) {
    // 删除头结点
    while (head != nullptr && head->val == val) { // 注意这里不是if
        ListNode *tmp = head;
        head = head->next;
        delete tmp;
    }
    // 删除非头结点
    ListNode* cur = head;
    while(cur != nullptr && cur->next != nullptr)
    {
        if(cur->next->val == val)
        {
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }
        else
        {
            cur = cur->next;
        }
    }
    return head;
}

int make_main203()
{
    ListNode* L;
    InitList(L);
    vector<int> nu{2,3,1,2,4,3};
    list_tail(L, nu);
    int val = 2;
    Solution203 wxw;
    ListNode* ww;
    ww = wxw.removeElements(L, val);
    cout<<ww->val<<ww->next->val<<ww->next->next->val<<ww->next->next->next->val<<endl;
    return 0;
}