

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(!head->next) return NULL;

         ListNode* slow = new ListNode(0);
        ListNode* fast = slow;

          slow->next = head;
        fast->next = head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = slow->next->next;
    return head;

    }
};