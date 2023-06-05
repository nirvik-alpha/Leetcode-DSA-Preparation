class Solution {
public:
    int myAtoi(string s) {
        
        int sign =1 , i =0;
        while(s[i]==' ')
        i++;

        if(s[i]=='+' || s[i]=='-')
        {
            if(s[i]=='-')
            sign = -1;
            i++;
        }

    double result = 0;
    while(i<s.length())
    {
        if(s[i]-'0'<0 || s[i]-'0'>9)
        break;
        
        result = result*10 + s[i]-'0';
        i++;
    }

    if(sign==-1)
    result = result*(-1);

     if(result > INT_MAX) return INT_MAX;            
        else if (result<INT_MIN) return INT_MIN;
        else return result;

    }
};