//
// Created by wxw on 23-2-18.
//
#include "linked_list.h"

bool InitList(ListNode* &L)
{
    L = (ListNode*)malloc(sizeof(ListNode));  //分配一个头结点
    if (L == nullptr)
        return false;
    L->next = nullptr;
    return true;
}

ListNode* list_tail(ListNode* L, vector<int> nu)
{
    ListNode *s,*r = L;
    for(int i = 0;i < nu.size();i++)
    {
        if (i == 0)
        {
            r->val = nu[i];
            continue;
        }
        s = (ListNode*)malloc(sizeof(ListNode));
        s->val = nu[i];
        r->next = s;
        r = s;
    }
    r->next =  nullptr;
    return L;
}