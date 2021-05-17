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
    void deleteNode(ListNode* node) {
        
        struct ListNode *tmp;
        struct ListNode *tmp1;
        tmp=node;
        tmp->val=(tmp->next)->val;
        tmp1=tmp->next;
        tmp->next=(tmp->next)->next;
        
        
        
    }
};