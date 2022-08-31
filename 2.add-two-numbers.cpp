/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int c = 0;

        while(l1 || l2 || c==1){
            int l1_val = (l1 == NULL)? 0:l1->val;
            int l2_val = (l2 == NULL)? 0:l2->val;
            int sum = l1_val + l2_val + c;
            c = (sum>=10)?1:0;
            cur->next = new ListNode(sum%10);

            cur = cur->next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }

        return dummy->next;

    }
};
// @lc code=end

