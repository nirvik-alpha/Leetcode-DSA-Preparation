// Time complexity - O(N)
// Space complexity - O(1)

/*
Explanation - created start pointer. set the next of start to head . created two pointers fast & slow then set it to start. started traversing until the fast pointer reaches the nth node. if it does not reach there then start traversing both the pointers until fast pointer reach the end.After the traversal is done make the next of slow to the next-next of slow pointer. 
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    ListNode* start = new ListNode();

    start->next = head;
    ListNode* fast = start;
    ListNode* slow = start;

     for(int i=0;i<n;i++)
     {
         fast =fast->next;
     }
    while(fast->next!=NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;

    return start->next;

    }
};