class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int,int>mp;
        vector<int>v;
        int n = nums.size();
        int x ; 
       // for(int i=0;i<n;i++)
      //  {
       //     mp[nums[i]]=i;
      //  }
        for(int i=0;i<n;i++)
        {
             x = target-nums[i];
           if(mp.find(x)!=mp.end()){
               v.push_back(i);
                v.push_back(mp[x]);
             //   return v;
           }  
            mp[nums[i]]=i;
        }
        
        return v;
        
    }
};