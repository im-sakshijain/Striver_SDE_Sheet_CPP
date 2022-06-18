int longestConsecutive(vector<int>& nums) {
        set<int> s;
        if(nums.size()==0){
            return 0;
        }
        for(int i = 0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        vector<int> n;
        for(auto x:s){
            n.push_back(x);
        }
      
        int nu = n.size();
        int ficount = 0,count = 1;
        for(int i = 0;i<nu-1;i++){
            if(n[i]+1==n[i+1]){
                count++;
            }
            else{
                ficount = max(ficount,count);
                count = 1;
            }
        }
        return max(ficount,count);
    }