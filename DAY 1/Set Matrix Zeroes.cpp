 void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        int rows[m];
        memset(rows, 0, sizeof(rows));
        int col[n];
        memset(col, 0, sizeof(col));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    col[j]=1;
                }
            }
        }
         for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(rows[i]==1||col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }