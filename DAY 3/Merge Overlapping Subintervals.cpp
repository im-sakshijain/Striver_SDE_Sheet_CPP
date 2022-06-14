vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> temp;
        if(intervals.size()==0){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto it:intervals){
           if(it[0]<=tempInterval[1]){
               tempInterval[1]=max(it[1],tempInterval[1]);
           }
            else{
                temp.push_back(tempInterval);
                tempInterval=it;
            }
        }
        temp.push_back(tempInterval);
        return temp;
        
    }