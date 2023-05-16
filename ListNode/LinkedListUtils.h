//
// Created by zieft on 2023/5/16.
//
#include <vector>
#ifndef LEETCODE_LINKEDLISTUTILS_H
#define LEETCODE_LINKEDLISTUTILS_H

#include "ListNode.h" // 包含ListNode的定义

using namespace std;
//ListNode* create_linklist_tail(vector<int>& li);
//class LinkedListUtils {
//
//};
class BaseSolution {
public:
    ListNode* create_linklist_tail(vector<int>& li);
    ListNode* createLinkedList(const std::vector<int>& arr);
    void printLinkedList(ListNode* head);
};

#endif //LEETCODE_LINKEDLISTUTILS_H
