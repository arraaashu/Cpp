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
     ListNode* fast=head;
     ListNode* slow=head;
     ListNode* length=head;
     int c=0;
     while(length)
     {
        length=length->next;
        c++;
     }
     if (c == n) 
     {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
     }
     n=c-n-1;
     for(int i=0;i<n;i++)
     slow=slow->next;
     if(slow==NULL || slow->next==NULL)
     return NULL;
     fast=slow->next->next;
     slow->next=fast;
     return head;
    }
};