#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int count=0;
   for(int i = 0;i<arr.size();i++){
       int xorel=0;
       for(int j = i;j<arr.size();j++){
           
           xorel^=arr[j];
            if(xorel==x){
               count++;
           }
          
       }
   }
    return count;
}
//efficient O(nlogn) approach
#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int count=0;
    map<int,int> mp;
    int xoxo = 0;
   for(int i = 0;i<arr.size();i++){
          xoxo = xoxo^arr[i];
           if(xoxo==x){
               count++;
           }
           if(mp.find(xoxo^x)!=mp.end()){
               count+=mp[xoxo^x];
           }
           mp[xoxo]+=1;
       }
   
    return count;
}