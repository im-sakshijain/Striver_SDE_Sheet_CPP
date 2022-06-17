//Method 1
vector<int> majorityElementII(vector<int> &nums)
{
         unordered_map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>n/3){
                v.push_back(x.first);
            }
        }
        return v;
}
//space optimized, Moore voting algo
vector<int> majorityElementII(vector<int> &nums)
{
    int nums1 = -1,nums2=-1;
    int c1=0,c2=0,count1=0,count2=0;
    int n = nums.size();
    vector<int> v;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]==nums1){
            c1++;
        }
        else if(nums[i]==nums2){
            c2++;
        }
        else if(c1==0){
           nums1=nums[i];
            c1=1;
        }
         else if(c2==0){
           nums2=nums[i];
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }
    for(int i = 0;i<nums.size();i++){
       if(nums[i]==nums1){
           count1++;
       } 
         if(nums[i]==nums2){
           count2++;
       } 
    }
    if(count1>n/3){
        v.push_back(nums1);
    }
  if(count2>n/3){
        v.push_back(nums2);
    }
   
    return v;
}