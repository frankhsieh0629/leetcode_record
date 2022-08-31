/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
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

    //recursive reverse
    // ListNode* reverelist(ListNode* p1){
    //     if(p1 == NULL || p1->next == NULL)
    //         return p1;

    //     ListNode* newhead = reverelist(p1->next);
    //     p1->next->next = p1;
    //     p1->next = NULL;

    //     return newhead;
    // }

    //two pointer reverse
    ListNode* reverelist(ListNode* p1){
        if(p1 == NULL)
            return NULL;

        ListNode* pre = NULL;
        ListNode* cur = p1;

        while(cur){
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }

        return pre;
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* new_l1 = reverelist(l1);
        ListNode* new_l2 = reverelist(l2);
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        int c = 0;
        while(new_l1 || new_l2 || c==1){
            int v1 = (new_l1 == NULL)? 0:new_l1->val;
            int v2 = (new_l2 == NULL)? 0:new_l2->val;
            int sum = v1 + v2 + c;

            c = (sum >=10)?1:0;
            cur->next = new ListNode(sum%10);
            cur = cur->next;

            if(new_l1)
                new_l1 = new_l1->next;
            if(new_l2)
                new_l2 = new_l2->next;
        }

        return reverelist(dummy->next);

    }
};
// @lc code=end

