//----O(N)--------
class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int sum=0;
       unordered_map<char,int> num=
       {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
       };
       for(int i=0; i<n; i++)
       {
        if(i+1<n && num[s[i]]<num[s[i+1]])
        {
            sum-=num[s[i]];
        }
        else
        {
            sum+=num[s[i]];
        }
       }
    return sum;
    }
};