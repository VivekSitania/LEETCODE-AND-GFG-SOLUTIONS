class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> row(mat.size(),0) , col(mat[0].size(),0);
        vector<pair<int,int>> ind(mat.size()*mat[0].size()+1);
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++) ind[mat[i][j]] = {i,j};
        // Now choose elements from arr and then update row and col
        for(int i=0;i<arr.size();i++){
            // we get elements
            row[ind[arr[i]].first]++;
            col[ind[arr[i]].second]++;
            if(row[ind[arr[i]].first] == mat[0].size() || col[ind[arr[i]].second] == mat.size()) return i;
        }
        return -1;
    }
};