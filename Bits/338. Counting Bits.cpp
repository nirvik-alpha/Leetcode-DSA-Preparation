// method -1 
class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>v(n+1);

        v[0] = 0;

        for(int i=1;i<=n;i++)
        {
            v[i] = v[i/2] + i%2;
        }

        return v;

    }
};

// method  -2 
class Solution {
public:
    vector<int> countBits(int n) {

      vector<int>ans;

      for(int i=0;i<=n;i++)
      {
          int sum =0 , int num =i;
            while(num!=0)
            {
                sum+=num%2;
                num/=2;
            }
            ans.push_back(sum);
      }  
      
      return ans;
    }
};
