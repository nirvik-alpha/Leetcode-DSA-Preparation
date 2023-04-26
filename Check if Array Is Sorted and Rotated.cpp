class Solution {
public:
    bool check(vector<int>& nums) {
        
         int k =0;
         int n = nums.size();
       for(int i=1;i<n;i++)
       {
           if(nums[i-1]>nums[i]){
               k++;
           }
          
       }
       if(nums[n-1]>nums[0]){
            k++;
        }
        return k<=1;


        
    }
};