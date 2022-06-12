   int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int minbuy = arr[0];
        int maxProfit = 0;
        for(int i = 1;i<n;i++){
            maxProfit = max(maxProfit,arr[i]-minbuy);
            minbuy = min(minbuy,arr[i]);
                
        }
        return maxProfit;
        
    }