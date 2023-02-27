class Solution {
public:
    bool isPalindrome(string s) {
        
        string rev="";
         transform(s.begin(), s.end(), s.begin(), ::tolower);
       
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') )
					rev+=s[i];
        }
        string x = rev ;
        reverse(x.begin(),x.end());
        if(x==rev)
        return true;
    
        return false;

    }
};