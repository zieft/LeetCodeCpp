//
// Created by zieft on 2023/5/16.
//

#include "LinkedListUtils.h"

ListNode* create_linklist_tail(vector<int>& li) {
    ListNode* head = new ListNode(li[0]);
    ListNode* tail = head;
    for (int i = 1; i < li.size(); i++) {
        ListNode* node = new ListNode(li[i]);
        tail->next = node;
        tail = node;
    }
    return head;
}