//most efficient combinatorics
int uniquePaths(int m, int n) {
         int totalPaths = (n+m-2);
        int selected = m-1;
        double ans = 1;
        for(int i = 1;i<=selected;i++){
            ans=ans*(totalPaths-selected+i)/i;
        }
        return (int)ans;
        
    }
