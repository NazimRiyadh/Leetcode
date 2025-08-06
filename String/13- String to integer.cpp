//------O(N)------
class Solution {
public:
    int myAtoi(string s) {

        int n=s.size();
        int max=INT_MAX;
        int min=INT_MIN;
        long long res=0;
        int i=0;

        //checking size
        if(n==0)
        {
            return 0;
        }

        //skipping white spaces 
        while(s[i]==' ' && i<n)i++;
       
        if(i==n)return 0;

        //checking the sign
        int pos=1;

        if(s[i]=='-')
        {
            pos=-1;
            i++;

        }
        else if(s[i]=='+')
        {
            pos=1;
            i++;

        }
        while(i<n && isdigit(s[i]))
        {
            int digit=s[i]-'0';
            res=res*10+digit;

            if(pos*res<min)
            {
                return min;
            }
            if(pos*res>max)
            {
                return max;
            }
        i++;
        }
    return static_cast<int>(pos*res);    
    }
};