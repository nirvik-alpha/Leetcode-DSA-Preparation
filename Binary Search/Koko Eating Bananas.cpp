class Solution {
public:

  long long  calculate(vector<int> &v, int hourly){

        long long  totalH = 0;
   
    //find total hours:
    for (int i = 0; i < v.size(); i++) {
        totalH += ceil((v[i]) / (double)(hourly));
    }
    return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1; 
        int high = *max_element(piles.begin(),piles.end());

        while(low<=high)
        {
            int mid = (low+ high)/2;
          
            if(calculate(piles, mid)<=h)
            {
                high = mid -1;
            }
            else{
                low = mid +1;
            }

        }

    return low; 


    }
};
