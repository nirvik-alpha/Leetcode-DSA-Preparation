// Time Complexity -  O(N) --> Working on exactly N nodes 
// Space Complexity - O(1) --> Didn't took any extra space 

/*
Explanation- First we took a dummynode and assigned it to NULL. Then we took another next node and set it to the next pointer of the head node.Then updated the next pointer of the head node to dummynode. After that set the dummynode to head and again head node is set to next node.

*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* dummynode = NULL;

        while(head!=NULL)
        {
            ListNode *next = head->next;
            head->next = dummynode;
            dummynode = head;
            head = next;
        }    

    return dummynode;
    }
};