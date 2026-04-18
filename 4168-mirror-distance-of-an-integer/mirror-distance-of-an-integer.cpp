class Solution {
public:
    int mirrorDistance(int n) {
        string st = to_string(n);           // convert to string
        
        reverse(st.begin(), st.end());      // reverse string
        
        int rev = stoi(st);                 // string → int
        
        return abs(n - rev);                // mirror distance
    }
};