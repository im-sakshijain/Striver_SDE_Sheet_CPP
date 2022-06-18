vector<int> twoSum(vector<int>& arr, int target) {
       unordered_map<int,int> mp;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(mp.find(target-arr[i])!=mp.end()){
                return {i,mp[target-arr[i]]};
            }
            mp[arr[i]]=i;
        }
        return {};
    }