/*
 * @lc app=leetcode id=160 lang=c
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA == NULL || headB == NULL)
        return NULL;
    
    int lenA=0;
    int lenB=0;
    struct ListNode *tempA=headA;
    struct ListNode *tempB=headB;

    while(tempA != NULL){
        while(tempB != NULL){
            if(tempA != tempB)
                tempB=tempB->next;
            else
            {
                return tempA;
            }
        }
        tempA=tempA->next;
        tempB=headB;
    }

    return NULL;
}
// @lc code=end

