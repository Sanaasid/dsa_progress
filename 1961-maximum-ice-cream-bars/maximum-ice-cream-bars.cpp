class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    int maxi=0;
    int mn=0;
    for(int i=0;i<costs.size();i++){
        if(mn+costs[i]<=coins){
            mn+=costs[i];
            maxi++;
        }
        
    }    
    return maxi;
    }
};