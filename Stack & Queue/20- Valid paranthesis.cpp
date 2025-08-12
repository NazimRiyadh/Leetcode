//------O(N)--------
class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        int n = s.size();

        if (n % 2 != 0) return false;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                valid.push(c);
            } 
            else {
                if (valid.empty()) return false; 

                if (c == ')' && valid.top() == '(') valid.pop();
                else if (c == '}' && valid.top() == '{') valid.pop();
                else if (c == ']' && valid.top() == '[') valid.pop();
                else return false;
            }
        }
        return valid.empty();
    }
};
