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
    ListNode* partition(ListNode* head, int x) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* dummy=head,*curr=head;
        
        while(dummy)
        {
            if(dummy->val<x){
                int value=dummy->val;
                
                ListNode* temp=curr;
                while(temp){
                int y=temp->val;
                temp->val=value;
                value=y;
                if(temp==dummy) break;
                temp=temp->next;   
                }
                curr=curr->next;
            }
            dummy=dummy->next;
        }
        return head;
    }
};