//Brute Force T.C:O(n*m), S.c:O(1)
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
//Binary Search T.C:O(log(n*m)), SC:O(1)
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m = matrix[0].size();
        int i = 0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
            
        }
        return false;
    }
//More Efficient 
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m = matrix[0].size();
        int low = 0,high = ((n*m)-1);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            else if(matrix[mid/m][mid%m]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }