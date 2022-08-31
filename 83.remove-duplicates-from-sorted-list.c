/*
 * @lc app=leetcode id=83 lang=c
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head)
        return NULL;
    if(head->next == NULL)
        return head;
    
    struct ListNode *temp = head;

    while(temp && temp->next){
        if(temp->val != temp->next->val)
            temp->next = temp->next->next;
        else
            temp=temp->head;
    }

    return head;
}
// @lc code=end

