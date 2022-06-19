int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int> mp;
    int n = arr.size();
    long long int sum = 0;
    int fians = 0,ans = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
           fians=(i+1);
        }
        else{
            if(mp.find(sum)!=mp.end()){
                fians = max(fians,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return fians;

}