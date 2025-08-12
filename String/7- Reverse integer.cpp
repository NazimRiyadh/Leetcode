//------O(N)---------
class Solution {
public:
    int reverse(int x) {
        long long num = 0;                
        int sign = (x < 0) ? -1 : 1;
        long long val = x;                
        val = llabs(val);                 
    
        while (val > 0) {
            if ((num * 10 + (val % 10))>INT_MAX) return 0; 
            num = num * 10 + (val % 10);
            val /= 10;
        }

        num *= sign;
        return (int)num;
    }
};
