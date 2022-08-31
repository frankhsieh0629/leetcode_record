/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* fakehead = new ListNode(0);
        fakehead->next = head;
        ListNode* cur = fakehead;
        ListNode* tmp = head;
        ListNode* tmp1 = head;

        while(cur->next && cur->next->next){
            tmp = cur->next->next->next;
            tmp1 = cur->next;

            cur->next = cur->next->next;
            cur->next->next = tmp1;
            cur->next->next->next = tmp;


            cur = cur->next->next;
        }

        return fakehead->next;
    }
};
// @lc code=end

