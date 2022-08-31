/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    void reorderList(ListNode* head) {

        ListNode* pre = head;
        ListNode* cur = head;
        ListNode* x = cur;

        while(pre && pre->next && pre->next->next){
            cur = pre->next;

            while(cur && cur->next){
                if(cur->next->next == NULL){
                    x = cur;
                }
                cur = cur->next;
            }
            // cout << cur->val << endl;

            ListNode* tmp = pre->next;
            pre->next = cur;
            cur->next = tmp;
            x->next = NULL;
            pre = pre->next->next;
        }
    }
};
// @lc code=end

