//-------o(n)------	
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
         vector<int>neg;
        int n=nums.size();
        bool flag= true;

        
        for(auto it: nums)
        {
            if(it>=0)
            {
                pos.push_back(it);
            }
            else
            {
                neg.push_back(it);
            }
        }
        int i=0;
        int j=0; 
        nums.clear();      
        while(i<n)
            {
                nums.push_back(pos[j]);
                nums.push_back(neg[j]);
                j++;
                i+=2;
            }
    
        return nums;
    }
};