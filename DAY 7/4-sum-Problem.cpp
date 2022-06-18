vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
       for(int i = 0;i<nums.size();i++){
           for(int j = i+1;j<nums.size();j++){
               int low = j+1;
               long long int ij = (nums[i]+nums[j]);
               int high = n-1;
             
               while(low<high){
                   long long int lh = (nums[low]+nums[high]);
                   if(lh+ij==target){
                        vector<int> v;
                       v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[low]);
                        v.push_back(nums[high]); 
                       ans.push_back(v);
                       low++;
                       high--;
                    while(low<high && nums[low]==v[2]){
                       low++;
                   }
                   while(low<high && nums[high]==v[3]){
                      high--;
                   }
                   }
                   else if((ij+lh)>target){
                       high--;
                   }
                   else{
                       low++;
                   }
                  
               }
               while(j+1<n && nums[j+1]==nums[j]){
                   j++;
               }
              
           }
           while(i+1<n && nums[i+1]==nums[i]){
               i++;
           }
           
       } 
    
    return ans;
    }