//-----O(n^2)--------
class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int freq[26]={0};
            for(int j=i; j<n; j++)
            {
                freq[s[j]-'a']++;
                int maxx=0;
                int minn=INT_MAX;

                for(int f: freq)
                {   
                    if(f>0){
                    maxx=max(maxx,f);
                    minn=min(minn,f);
                    }
                }
            sum+=(maxx-minn);
           }
        }
    return sum;
    }
};