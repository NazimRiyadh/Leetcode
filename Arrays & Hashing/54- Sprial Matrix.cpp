//--------O(m*n)--------
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> riyadh;
        int top= 0;
        int bottom= m-1;
        int left=0;
        int right=n-1;
        while(top<=bottom && left<=right)
        {
            for(int i=left; i<=right; i++)
            {
                riyadh.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bottom; i++)
            {
                riyadh.push_back(matrix[i][right]);
            }
            right--;

	    //if gula dorkar edge case er jnno
	    //top bottom if check na korle ek top bottom er jnno abr print korbe
            if(top<=bottom)
            {
            for(int i=right; i>=left; i--)
            {
                riyadh.push_back(matrix[bottom][i]);
            }
            }
            bottom--;       
	    
	    //ei if check na korle left right k cross korleo print hbe 
            if(left<=right)
            {
            for(int i=bottom; i>=top; i--)
            {
                riyadh.push_back(matrix[i][left]);
            }
            }
            left++;
        }
    return riyadh;
    }
};