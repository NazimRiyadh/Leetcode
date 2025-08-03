//-----O(n)--------(kadanes Algorithm)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx= INT_MIN;
        int sum=0;
        int n=nums.size();
        bool flag=false;
        //checking if the array is all negative
        for(int i=0; i<n; i++)
        {
            if(nums[i]>=0)
                flag=true;
        }
        if(flag==false)
        {
            for(int i=0; i<n; i++)
            {
                maxx=max(nums[i], maxx);
            }
            return maxx;
        }
        else
        {
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                sum=0;
            }
            maxx=max(sum,maxx);
        }
        }
        return maxx;
    }
};

/*-------o(n^3)----------
bruteforce-----
check every subarray 
for(int i=0 to n)
{
  for(int  j=i to n)
     {
	for{k=i to j)
	   {
	     sum+=nums[k];
	   }
	maxx=max(sum, maxx)
     }
}
return maxx

//-----Optimal(O(n^2)-----
same as bruteforce
just in the k loop where you are calculating sum everytime
just have the prefic sum calculated
that's it!
*/






