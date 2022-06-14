
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> pa;
    int ans = 0,ans2=0;
    unordered_map<int,int> mp;
    for(int i = 0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(int i = 1;i<=n;i++){
        if(mp[i]==0){
            ans = i;
        }
        if(mp[i]>1){
            ans2=i;
        }
    }
    pa = make_pair(ans,ans2);
    return pa;   
}
