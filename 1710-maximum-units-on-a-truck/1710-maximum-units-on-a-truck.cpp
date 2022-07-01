class Solution {
public:
    static bool  cmp(vector<int>a,vector<int>b){
        if(a[1] > b[1]){
            return true;
        }
        return false;
    }
    
    int maximumUnits(vector<vector<int>>& arr, int k) {
        int ans=0;
        sort(arr.begin() , arr.end() , cmp);
        for(auto it : arr){
            if(it[0]<=k){
                ans+=(it[0]*it[1]);
                k-=it[0];
            }
            else{
                ans+=(k*it[1]);
                k=0;
            }
            if(k==0){
                break;
            }
        }
        
        return ans;
        
    }
};