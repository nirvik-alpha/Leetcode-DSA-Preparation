class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>pq; 

        int a =1;
        for(auto u : nums)
        {
            pq.push(u);
        }

        for(int i=0;i<nums.size();i++)
        {
            if(a<k)
            {
                pq.pop();
                a++;
            }
        }

        return pq.top();
    }
};
