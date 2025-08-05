//------O(n^2)-----
class Solution {
public:
    bool rotateString(string s, string goal) {
       int m=s.size();
       int n=goal.size();
       if(m!=n)
       {
        return false;
       }
      for(int i=0; i<m; i++)
      {
        rotate(begin(s), begin(s)+1, end(s));
        if(s==goal)
        {
            return true;
        }
      }
      return false;
    }
};

//------O(N)---------

class Solution {
public:
    bool rotateString(string s, string goal) {
       int m=s.size();
       int n=goal.size();
       if(m!=n)
       {
        return false;
       }
       string doubled=s+s;
       if(doubled.find(goal)!=string::npos)
       {
        return true;
       }
    return false;
    }
};