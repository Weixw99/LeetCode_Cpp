//
// Created by wxw on 23-2-19.
//
#include "linked_list.h"

void MyLinkedList707::MyLinkedList() {  //初始化链表

    dummy_head = new ListNode(0);  //定义一个虚拟头结点
    size = 0;  //链表大小
}

int MyLinkedList707::get(int index) {
    if (index > (size - 1) || index < 0){  //判断是否索引有效
        return -1;
    }
    ListNode* cur = dummy_head->next;
    while (index--){
        cur = cur->next;
    }
    return cur->val;
}
void MyLinkedList707::addAtHead(int val) {
    ListNode* wxw = new ListNode(val);
    wxw->next = dummy_head->next;
    dummy_head->next = wxw;
    size++;
}

void MyLinkedList707::addAtTail(int val) {
    ListNode* wxw = dummy_head;
    ListNode* new_node = new ListNode(val);
    while (wxw->next != nullptr){
        wxw = wxw->next;
    }
    wxw->next = new_node;
    size++;
}

void MyLinkedList707::addAtIndex(int index, int val) {
    if (index == size){
        addAtTail(val);
        return;
    }
    else if (index < 0){
        addAtHead(val);
        return;
    }
    else if (index > (size - 1)){
        return;
    }
    else{
        ListNode* new_node = new ListNode(val);
        ListNode* wxw = dummy_head;
        while (index--){  //找到第index个的上一个
            wxw = wxw->next;
        }
        new_node->next = wxw->next;
        wxw->next = new_node;
        size++;
    }
}

void MyLinkedList707::deleteAtIndex(int index) {
    if(index >= size || index < 0){
        return;
    }
    ListNode* wxw = dummy_head;
    while (index--){  //找到第index个的上一个
        wxw = wxw->next;
    }
    ListNode* tmp = wxw->next;
    wxw->next = wxw->next->next;
    delete tmp;
    size--;
}
void MyLinkedList707::printLinkedList(){
    ListNode* wxw = dummy_head;
    while (wxw->next != nullptr){
        cout <<wxw->next->val << " ";
        wxw = wxw->next;
    }
};

int make_main707()
{
    MyLinkedList707 wxw;
    wxw.MyLinkedList();
    wxw.addAtHead(1);
    wxw.addAtTail(3);
    wxw.addAtIndex(1, 2);
    wxw.get(1);
    wxw.deleteAtIndex(1);
    wxw.get(1);
    wxw.printLinkedList();
}