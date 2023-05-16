class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++)
        sort(nums[i].begin(),nums[i].end());
        int sum=0;
        for(int i=0;i<nums[0].size();i++)
        {
            vector<int> v;
            for(int j=0;j<nums.size();j++)
            v.push_back(nums[j][i]);
            sort(v.begin(),v.end(),greater<int>());
            sum+=v[0];
        }
        return sum;
    }
};