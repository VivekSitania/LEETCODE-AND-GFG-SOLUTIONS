class Solution {

public:

    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int ans = 0, i = 0, j = nums.size() - 1, mod = pow(10, 9) + 7;

        vector<int> pow(nums.size());

        pow[0] = 1;

        for(int i = 1; i < nums.size(); i++)

            pow[i] = (pow[i - 1] * 2) % mod;

        while(i <= j)

        {

            if(nums[i] + nums[j] <= target)

            {

                ans += pow[j - i];

                i++;

                ans %= mod;

            }

            else j--;

        }

        return ans;

    }

};
