class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>arr(n,vector<int>(n)); // 2d vector ceate wih given size
        int mid=(n+1)/2;
        int num=1;
        
        int a=0;
        int b=n-1;
        int c=n-1;
        int d=0;
        
        for(int i=0; i<mid; i++)
        {
            //For Upper horizontal Row
            for(int j=i ;j<n-i; j++)
            {
                arr[a][j]=num;
                num++;
            }
    
            //for right vertical column
            for(int j=i+1; j<n-i; j++)
            {
                arr[j][b]=num;
                num++;
            }
            
            //for lower horizontal row
            for(int j=n-2-i; j>=i; j--)
            {
                arr[c][j]=num;
                num++;
            }
            
            //for left vertical column
            for(int j=n-2-i; j>i; j--)
            {
                arr[j][d]=num;
                num++;
            }
            a++;
            b--;
            c--;
            d++;
        }
        return arr;
    }
};