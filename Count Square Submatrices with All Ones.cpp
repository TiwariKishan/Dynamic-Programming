class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size(),ans=0;
        for(int i=0;i<r;i++)
            ans+=matrix[i][0];
        for(int i=1;i<c;i++)
            ans+=matrix[0][i];
        for(int i=1;i<r;i++)
            for(int j=1;j<c;j++)
                if(matrix[i][j]==1)
                {
                    int a=min(matrix[i-1][j],min(matrix[i-1][j-1],matrix[i][j-1]))+matrix[i][j];
                    ans+=a;
                    matrix[i][j]=a;
                }
     return ans;
    }
};
