/// Time Complexity --- O(N*N)
/// Space Complexity --- O(1)

class Solution {
public: 

  int expandroundcenter(string s , int left , int right)
  {
      int n = s.size();
      int start = left ; 
      int end = right;
      while(start>=0 && end<n && s[start]==s[end] )
      {
          start--;
          end++;
      }
      return end-start-1;
  }

    string longestPalindrome(string s) {
        int n =s.size();

        if(n<=1)
        return s;

        int start = 0 , end=0;

        for(int i =0 ;i<n;i++)
        {
            int len1 = expandroundcenter(s,i,i);
            int len2 = expandroundcenter(s,i,i+1);
            int len = max(len1,len2);
            if(len> end-start+1)
            {
                start = i - (len-1)/2;
                end = i+ len/2;
            }

        }
    return s.substr(start ,end-start+1);
    }
};