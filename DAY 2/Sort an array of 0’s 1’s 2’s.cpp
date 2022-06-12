 void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0,low = 0,high=n-1;
        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
        }
        
    }