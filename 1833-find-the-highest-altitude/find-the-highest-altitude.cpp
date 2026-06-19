class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n=gain.size();
        int curr = 0;
        int mx = 0;

        for(int x : gain) {
            curr += x;
            mx = max(mx, curr);
        }

        return mx;
    }
};