//--------O(log(m*n))----------
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n= matrix[0].size();
        int low=0;
        int high=m*n-1;
        while(high>=low)
        {
            int mid=low+(high-low)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;

    }
};

/*------O(m*n)
just iterate through all over the array


-------O(mlog(n))
check every row if the range of target fall into that row using while loop

if target fall into particular row range
    use binary search in that row
        if found- retrun true
        else return false;

