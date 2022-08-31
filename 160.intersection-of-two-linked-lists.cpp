/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ta = headA;
        ListNode* tb = headB;

        int lena = 0;
        int lenb = 0;

        while(ta != NULL){
            lena++;
            ta = ta->next;
        }

        while(tb != NULL){
            lenb++;
            tb = tb->next;
        }

        int n=0;
        if(lena >= lenb){
            n=lena-lenb;
            while(n){
                headA = headA->next;
                n--;
            }
        }
        else{
            n=lenb-lena;
            while(n){
                headB = headB->next;
                n--;
            }
        }

        while(headA != NULL){
            if(headA == headB){
                return headA;
            }

            headA = headA->next;
            headB = headB->next;
        }

        return NULL;

    }
};
// @lc code=end

