int maxSubArray(vector<int>& arr) {
        int sumtillnow = arr[0];
        int maxans = sumtillnow;
        for(int i = 1;i<arr.size();i++){
            sumtillnow = max(arr[i],sumtillnow+arr[i]);
             maxans=max(maxans,sumtillnow);
        }
        return (maxans);
    }