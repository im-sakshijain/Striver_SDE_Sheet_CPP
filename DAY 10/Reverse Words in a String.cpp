   string reverseWords(string s) {
      vector<string> v;
        string word = "";
        string ans="";
        for(int i = 0;i<s.size();i++){
            if(s[i]!=' '){
               word+=s[i]; 
            }
            else if(s[i]==' ' && word.size()>0){
                v.push_back(word);
                word="";
            }
        }
       if(word.size()!=0){
           v.push_back(word);
       }
        reverse(v.begin(),v.end());
        for(int i = 0;i<v.size()-1;i++){
            ans+=v[i];
            ans+=" ";
        }
        ans+=v[v.size()-1];
        
        return ans;
    }