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
    bool isPalindrome(ListNode* head) {
        
        stack <int> list;
        ListNode *tmp =head;
        while(tmp!=NULL)
        {
            list.push(tmp->val);
            tmp=tmp->next;
            
        }
        
        tmp=head;
    
        while(tmp!=NULL)
        {
            int l = list.top();
            if(l!=tmp->val)
                return false;
            list.pop();
            tmp=tmp->next;
        }
        return true;
        }
      

        
    
};