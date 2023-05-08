class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diag1=0;
        int diag2=0;
        for(int i=0;i<mat.size();i++)
        {
   
            diag1=diag1+mat[i][i];
        }
       
        int j=mat.size()-1;
        for(int i=0;i<mat.size();i++,j--)
        {
            if(i!=j)
            {
                diag2=diag2+mat[i][j];
            }
        }
        return diag1+diag2;      
    }
};
