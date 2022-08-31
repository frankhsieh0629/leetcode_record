/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL)
            return NULL;

        ListNode* t = head;
        int count = 0;

        while(t){
            count++;
            t = t->next;
        }

        k = k % count;

        while(k){
            ListNode* pre = head;
            ListNode* cur = head->next;

            if(!cur)
                return head;

            while (cur->next)
            {
                cur = cur->next;
                pre = pre->next;
            }

            pre->next = NULL;
            cur->next = head;
            head = cur;
            k--;
        }

        return head;
    }
};
// @lc code=end

