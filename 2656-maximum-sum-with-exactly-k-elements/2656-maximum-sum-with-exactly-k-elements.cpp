class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = 0;
        for(int i=0; i< nums.size(); i++) mx = max(mx, nums[i]);
        int ans = 0;
        while(k--) {
            ans += mx;
            mx++;
        }
        return ans;
    }
};