//Method 1
double myPow(double x, int n) {
        double ans = pow(x,n);
        return ans;
    }
//Method 2
 double myPow(double x, int n) {
        double ans=1.0;
        for(int i = 0;i<n;i++){
            ans*=x;
        }
        return ans;
    }