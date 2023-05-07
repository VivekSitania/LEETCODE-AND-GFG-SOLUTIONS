









class Solution {

public:

    

    vector<int> distinctDifferenceArray(vector<int>& nums) {

        unordered_map<int,int>mpsuffix,mpprefix;

        for(int i=0;i<nums.size();i++){

            mpsuffix[nums[i]]++;

        }

    vector<int>ans;

    

    for(int i=0;i<nums.size();i++){

        mpprefix[nums[i]]++;

        mpsuffix[nums[i]]--;

        

        if(mpsuffix[nums[i]]<=0) mpsuffix.erase(nums[i]);

        int bsz=mpprefix.size();

        int fsz=mpsuffix.size();

        

        ans.push_back(bsz-fsz);

    }

    

    return ans;

    }

};


        