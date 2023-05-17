

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
         ListNode* temp = head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
           temp =temp->next;
        } 
        sort(v.begin(),v.end());
        temp=head;
        for(auto u:v) 
         {
             temp->val = u;
             temp = temp->next;
         }
        return head;


    }
};