vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
        vector<int> v;
        priority_queue<int> minh;
        for(int i = 0;i<n;i++){
            minh.push(arr[i]);
        }
        int limit = k-1;
        while(limit>0){
            minh.pop();
            limit--;
        }
        priority_queue<int, vector<int>, greater<int>> maxH;
        for(int i = 0;i<n;i++){
            maxH.push(arr[i]);
        }
        int limit2 = k-1;
        while(limit2>0){
            maxH.pop();
            limit2--;
        }
        v.push_back(maxH.top());
        v.push_back(minh.top());
        return v; 
}