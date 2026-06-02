class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
       int n=landStartTime.size();
       int m=waterStartTime.size();
       int minlandfin=INT_MAX;
       for(int i=0;i<n;i++){
        minlandfin=min(minlandfin,landStartTime[i]+landDuration[i]);
       }
       int minwaterfin=INT_MAX;
       for(int j=0;j<m;j++){
        minwaterfin=min(minwaterfin,waterStartTime[j]+waterDuration[j]);
       }
       long long ans= LLONG_MAX;
       // Land -> Water
        for (int j = 0; j < m; j++) {
            ans = min(ans,
                      (long long)max(minlandfin, waterStartTime[j])
                      + waterDuration[j]);
        }
        // Water -> Land
        for (int i = 0; i < n; i++) {
            ans = min(ans,
                      (long long)max(minwaterfin, landStartTime[i])
                      + landDuration[i]);
        }
        return (int)ans;
    }
};