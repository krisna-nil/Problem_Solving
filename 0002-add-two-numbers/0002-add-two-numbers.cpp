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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cf=0;
        ListNode* t;
        ListNode* head=NULL;
        ListNode* tail;
        
        while(l1!=NULL || l2!=NULL)
        { 
            int temp=0;
            if(l1!=NULL)
            {
            temp+=l1->val;
             l1=l1->next;
            }
            if(l2!=NULL)
            {
                temp+=l2->val;
                 l2=l2->next;
            }
            temp+=cf;
            cf=0;
            if(temp/10!=0)
            {
                cf=1;
                temp=temp%10;;
            }
            t=new ListNode(temp);
            if(head==NULL)
            {
            head=t;
            tail=t;
            }
            else
            {
                tail->next=t;
                tail=tail->next;
            }
        }
        if(cf!=0)
        {
            t=new ListNode(cf);
            tail->next=t;
            tail=tail->next;
        
        }
        return head;
        
    }
        

};