class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Binary search se baad mai karna
        int negative_no = 0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j] < 0)
                {
                    negative_no++;
                }
            }
        }
        return negative_no;
    }
};