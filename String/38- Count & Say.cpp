//Time complexity= O(length of nth string) ≈ exponential in n
//Recursive approach

class Solution {
public:
    string countAndSay(int n) {
        string result="";
        if(n==1){
            return "1";}
        string check= countAndSay(n-1);
        int m=check.size();
        for(int i=0; i<m; i++)
        {
            char ch=check[i];
            int count=1;
            while(i<m-1 && ch==check[i+1])
            {
                count++;
                i++;
            }
        result+=to_string(count)+string(1,ch);
        }
    return result;
    }
};