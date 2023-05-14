class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool>vis(n+1,false);
        vector<int>ans;
        for(int i=1, mul=1 ; !vis[i]; mul++)
        {
            vis[i]=true;
            i=(i+mul*k)%n;
            if(i==0)i=n;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};