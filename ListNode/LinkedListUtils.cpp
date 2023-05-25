//
// Created by zieft on 2023/5/16.
//
#include <iostream>
#include "LinkedListUtils.h"

ListNode *BaseSolution::create_linklist_tail(vector<int> &li) {
    ListNode *head = new ListNode(li[0]);
    ListNode *tail = head;
    for (int i = 1; i < li.size(); i++) {
        ListNode *node = new ListNode(li[i]);
        tail->next = node;
        tail = node;
    }
    return head;
}

ListNode *BaseSolution::createLinkedList(const vector<int> &arr) {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    for (int i: arr) {
        ListNode *newNode = new ListNode(i);
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

void BaseSolution::printLinkedList(ListNode *head) {
    ListNode *curr = head;
    while (curr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

ListNode *BaseSolution::createLinkListWithCircle(vector<int> &li, int pos) {
    ListNode *head = new ListNode(li[0]);
    ListNode *tail = head;
    int length = li.size();
    ListNode *first_in_circle = nullptr;

    for (int i = 1; i < length; i++) {
        ListNode *node = new ListNode(li[i]);
        tail->next = node;
        tail = node;

        if (i == pos) {
            first_in_circle = tail;
        }

        if (i == length - 1) {
            tail->next = first_in_circle;
        }
    }

    return head;
}

// 释放链表内存
void BaseSolution::releaseLinkedList(ListNode *head) {
    ListNode *curr = head;
    while (curr) {
        ListNode *temp = curr;
        curr = curr->next;
        delete temp;
    }
}

// 释放含有环的链表内存
void BaseSolution::freeCycledLinkedList(ListNode *head) {
    if (!head) {
        return;
    }

    // 找到环的入口节点，参考141题
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    if (fast && fast->next) {
        // 存在环，断开环
        ListNode *entry = head;
        while (entry != slow) {
            entry = entry->next;
            slow = slow->next;
        }
        // 环的入口节点的 next 指针设置为 nullptr
        slow->next = nullptr;
    }

    // 释放单链表的内存
    ListNode *current = head;
    while (current) {
        ListNode *nextNode = current->next;
        delete current;
        current = nextNode;
    }
}