class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
      
      return s.length() == goal.length() && (s + s).find(goal) != string::npos;
      //npos mtlb not possible, 
      //s+s= "abcdeabcde" ismein presence dekhli goal ki to pta chljayega kitne bhi shift ke baad aayega ya ni
    }
};