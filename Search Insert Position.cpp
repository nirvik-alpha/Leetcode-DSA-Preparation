class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        
           int start =0;
    int end = arr.size()-1;
  
    int x=0;

      if(k<arr[0])
        return start;
    
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]<k)
        {
          
            start = mid+1;
        }
        else if(arr[mid]>k)
        {
            
            end = mid-1;
            
        }
        else if(arr[mid]==k)
        {
           return mid;
        }
        
    }

       return start;
       

    }
};