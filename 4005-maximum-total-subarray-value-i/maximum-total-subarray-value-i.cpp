class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        return 1LL * k * (mx - mn);
    }
};
// Intuition (Interview/Contest)
// Jab bhi question me likha ho:
// "same item can be chosen multiple times"
// to aksar answer hota hai:
// best possible item find karo aur use k baar le lo.
// Yahan best item = wo subarray jiska value maximum hai.
// Aur maximum value hamesha:
// global maximum - global minimum