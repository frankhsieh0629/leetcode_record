/*
 * @lc app=leetcode id=1290 lang=cpp
 *
 * [1290] Convert Binary Number in a Linked List to Integer
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
    int getDecimalValue(ListNode* head) {

        if(!head){
            return 0;
        }

        ListNode* cur = head;

        int len = 0;
        while(cur){
            len++;
            cur = cur->next;
        }

        cur = head;
        int tmp = 1;
        int ans = 0;
        while(cur){
            if(cur->val == 1){
                tmp=1;
                for(int i=len-1; i>0; i--){
                    tmp = tmp*2;
                }
                ans += tmp;
            }

            if(len == 0)
                ans++;

            cur = cur->next;
            len--;
        }

        return ans;
    }
};
// @lc code=end

