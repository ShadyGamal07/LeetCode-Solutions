class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        
        int tp=0;
        vector<int> ans(arr.size());
        
        for(int i=0 ; i<arr.size() ; i++){
            ans[i]=tp+arr[i];
            tp=ans[i];
        }
        
        return ans;
        
    }
};