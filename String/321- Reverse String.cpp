//----O(N) with O(1) space complexity----
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int left=0;
        int right=n-1;
        while(right>=left)
        {   
            swap(s[right], s[left]);
            right--;
            left++;
        }
    }
};