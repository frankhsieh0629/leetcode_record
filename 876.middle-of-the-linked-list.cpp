/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count =0;
        ListNode* cur = head;

        while(cur){
            count++;
            cur = cur->next;
        }

        int n = count/2;
        cur = head;
        while(n){
            cur = cur->next;
            n--;
        }

        return cur;
    }
};
// @lc code=end

