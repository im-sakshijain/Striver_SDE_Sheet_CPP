void nextPermutation(vector<int>& permutation) {
     int n = permutation.size();   
    int ind1=0,ind2=0;
        int i = 0;
    for( i = n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            ind1=i;
            break;
        }
    }
    if(i<0){
        reverse(permutation.begin(),permutation.end());
    }
    else{
    for(int j = n-1;j>ind1;j--){
        if(permutation[j]>permutation[ind1]){
            ind2=j;
            break;
        }
    }
    swap(permutation[ind1],permutation[ind2]);
    reverse(permutation.begin()+ind1+1,permutation.end());
    }
    
    }