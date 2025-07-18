//------------O(n)----------
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>right(n, 1);
        vector<int>left(n, 1);
        for(int i=1; i<n; i++)
        {
            left[i]=nums[i-1]*left[i-1];
        }
        for(int i=n-2; i>=0; i--)
        {
            right[i]=nums[i+1]*right[i+1];
        }
        for(int i=0; i<n; i++)
        {
            nums[i]=left[i]*right[i];
        }
        return nums;
    }
};

//------O(1)space complexity--------
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        //wiil strory my answer(o(1))--ouput array dowsn't count
        vector<int>ans(n,1);

        int left=1;
        for(int i=1; i<n; i++)
        {
            ans[i]= nums[i-1]*ans[i-1];//direct left store
        }

        int right=1;
        for(int i=n-2; i>=0; i--)
        {
            ans[i]*=nums[i+1]*right;//direct left*right store by using right
            right*=nums[i+1];
        }

        return ans;
    }
};
