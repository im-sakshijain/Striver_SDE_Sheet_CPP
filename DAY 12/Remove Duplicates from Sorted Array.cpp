 int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i = 0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
        return s.size();
    }
//efficient
 int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 1;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j]=nums[i+1];
                j++;
            }
        }
       return j;
    }