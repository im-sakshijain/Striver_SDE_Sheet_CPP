//naive
int lengthOfLongestSubstring(string s) {
        int maxans = 0;
        int i,j;
        for( i = 0;i<s.size();i++){
            unordered_set<int> mp;
            for( j = i;j<s.size();j++){
                if(mp.find(s[j])!=mp.end()){
                    maxans = max(maxans,j-i);
                    break;
                }
                mp.insert(s[j]);
            }
               int si = mp.size();
                maxans=max(maxans,si);
            
        }
        return (maxans);
        
    }
//efficient
int lengthOfLongestSubstring(string s) {
       unordered_map<int,int> mp;
        int n = s.size();
        
        int right = 0,left = 0,ans=0;
        while(right<n){
            if(mp.find(s[right])!=mp.end()){
                left = max(mp[s[right]]+1,left);
            }
            mp[s[right]]=right;
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
        
    }