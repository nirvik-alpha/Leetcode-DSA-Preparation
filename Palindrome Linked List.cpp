

class Solution {
public:

     ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* p=NULL , *c = head, *n = head->next;
        while(c!=NULL)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL) n=n->next;
        }
        return p;
    }

    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
       ListNode* fast = head;
       
       while(fast->next!=NULL && fast->next->next!=NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
       }
       
       slow->next = reverseList(slow->next);
       
       
       slow = slow->next;
       
       
       while(slow!=NULL)
       {
           if(head->val!=slow->val)
           return false;
           head = head->next;
           slow = slow->next;
           
       }
       
       return true;



    }
};