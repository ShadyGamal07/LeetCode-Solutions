class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int ans=0;
        for(auto it : arr){
            int cnt=0;
            for(int i=0 ; i<it.size() ; i++){
                cnt+=it[i];
            }
            
            if(cnt>ans){
                ans=cnt;
            }
        }
        
        return ans;
    }
};