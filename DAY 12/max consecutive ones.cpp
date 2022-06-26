 int findMaxConsecutiveOnes(vector<int>& arr) {
        int count = 0,countmax=0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0){
                count = 0;
            }
            else{
                count++;
                countmax = max(count,countmax);
            }
        }
        return countmax;
    }