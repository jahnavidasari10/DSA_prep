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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
    ListNode*curr=head;
    while(curr){
        curr=curr->next;
        count++;
    }
    if(count==n){
        return head->next;
    }
    int del=count-n+1;
    count=1;
    curr=head;
    ListNode*pre=NULL;
    while(count!=del){
        pre=curr;
        curr=curr->next;
        count++;
    }
    pre->next=curr->next;
    delete curr;
    return head;
    }
};