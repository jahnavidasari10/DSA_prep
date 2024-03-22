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
   ListNode*findmiddle(ListNode*head){
       if(head==NULL){
           return NULL;
       }
       ListNode*slow=head;
       ListNode*fast=head;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
   ListNode* reverseList(ListNode*head){
       
       ListNode*curr=head;
       ListNode*prev=NULL;
       while(curr!=NULL){
           ListNode*store=curr->next;
           curr->next=prev;
           prev=curr;
           curr=store;
       }
       return prev;
   }
   bool compare(ListNode* h1,ListNode*h2){
       while(h1!=NULL && h2!=NULL){
           if(h1->val!=h2->val)return false;
           h1=h1->next;
           h2=h2->next;
       }
       return true;
   }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode*h1=head;
        ListNode*mid=findmiddle(h1);
        ListNode*h2=reverseList(mid);
        return compare(head,h2);
    }
};