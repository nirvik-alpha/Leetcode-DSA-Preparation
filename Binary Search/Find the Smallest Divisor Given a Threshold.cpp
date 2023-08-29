////----------------------------- Brute Force ------------------------

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size(); 
  
    int maxi = *max_element(arr.begin(), arr.end());

    for (int d = 1; d <= maxi; d++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(arr[i]) / (double)(d));
        }
        if (sum <= limit)
            return d;
    }
    return -1;
}

////-- Time Complexity: O(max(arr[])*N)

/// -------------------------------- OPtimal-------------------------
class Solution {
public:

    
int sum(vector<int> &arr, int div) {
    int n = arr.size(); 

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}


    int smallestDivisor(vector<int>& nums, int limit) {

    int n = nums.size();
    if (n > limit)
     return -1;
    int low = 1 ;
    int high = *max_element(nums.begin(), nums.end());


    while (low <= high) {
        int mid = (low + high) / 2;
        if (sum(nums, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;


    }
};

/// Time Complexity: O(log(max(arr[]))*N),

