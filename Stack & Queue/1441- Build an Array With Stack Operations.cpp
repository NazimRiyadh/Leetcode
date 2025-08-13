//------O(N)--------   
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> check;
        int m=target.size();
        int j=0;
        for(int i=1; i<=target[m-1]; i++)
        {
            if(target[j]==i)
            {
                check.push_back("Push");
                j++;
            }
            else
            {
                check.push_back("Push");
                check.push_back("Pop");
            }         
        }
    return check;
    }
};