string longestCommonPrefix(vector<string>& strs) {
        int smallstr=INT_MAX;
        string smallest="";
        int ind = -1;
        for(int i = 0;i<strs.size();i++){
            if(strs[i].size()<smallstr){
                smallstr=strs[i].size();
                smallest=strs[i];
                ind = i;
            }
        }
       for(int i = 0;i<strs.size();i++){
           int len = smallest.size();
           if(ind!=i){
               while(!smallest.empty() && smallest!=strs[i].substr(0,len)){
                   smallest.pop_back();
                   len--;
               }
               if(smallest==""){
                   return "";
               }
           }
       }
    
    return smallest;
    }