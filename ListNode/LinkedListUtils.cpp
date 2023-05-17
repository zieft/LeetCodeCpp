//
// Created by zieft on 2023/5/16.
//
#include <iostream>
#include "LinkedListUtils.h"

ListNode* BaseSolution::create_linklist_tail(vector<int>& li) {
    ListNode* head = new ListNode(li[0]);
    ListNode* tail = head;
    for (int i = 1; i < li.size(); i++) {
        ListNode* node = new ListNode(li[i]);
        tail->next = node;
        tail = node;
    }
    return head;
}

ListNode* BaseSolution::createLinkedList(const vector<int>& arr) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i : arr) {
        ListNode* newNode = new ListNode(i);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

void BaseSolution::printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

// 释放链表内存
void BaseSolution::releaseLinkedList(ListNode *head) {
    ListNode* curr = head;
    while (curr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
}
