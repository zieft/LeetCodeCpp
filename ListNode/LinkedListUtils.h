//
// Created by zieft on 2023/5/16.
//
#include <vector>

#ifndef LEETCODE_LINKEDLISTUTILS_H
#define LEETCODE_LINKEDLISTUTILS_H

#include "ListNode.h" // 包含ListNode的定义

using namespace std;

class BaseSolution {
public:
    ListNode *create_linklist_tail(vector<int> &li);  // 尾插法
    ListNode *createLinkedList(const std::vector<int> &arr); // 头插法
    ListNode *createLinkListWithCircle(vector<int> &li, int pos);
    void printLinkedList(ListNode *head);
    void releaseLinkedList(ListNode *head);
    void freeCycledLinkedList(ListNode *head);
    void merge_linklist_at_tail(ListNode *old_list, ListNode *new_list);
};

#endif //LEETCODE_LINKEDLISTUTILS_H

/*
为什么成员函数要用指针的方式定义?

成员函数使用指针方式定义的主要原因是在函数内部修改链表结构时，需要修改链表节点的指针，而不仅仅是修改函数内部的局部变量。
通过使用指针方式定义成员函数，可以直接操作链表节点的指针，对链表进行修改。

如果成员函数不使用指针方式定义，而是传递链表对象或引用，那么在函数内部对链表进行修改时，只会修改函数内部的局部副本，不会对原始链表产生影响。
因此，为了在成员函数中对链表进行修改，需要使用指针方式定义，以便直接修改链表节点的指针。
*/
