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

ListNode* define_list(const vector<int>& list, bool dummy_head_flag){
    auto* dummy_head = new ListNode(0);
    ListNode* wxw = dummy_head;
    for (auto i : list){
        auto* new_node = new ListNode(i);
        while (wxw->next != nullptr){
            wxw = wxw->next;
        }
        wxw->next = new_node;
    }
    print_list(dummy_head->next);
    if (dummy_head_flag) return dummy_head->next;
    else return dummy_head;

}

void print_list(ListNode* head){
    auto* dummy_head = new ListNode(0);
    ListNode* wxw;
    dummy_head->next = head;
    wxw = dummy_head;
    while (wxw->next){
        cout <<wxw->next->val << " ";
        wxw = wxw->next;
    }
    cout <<'\n';
}