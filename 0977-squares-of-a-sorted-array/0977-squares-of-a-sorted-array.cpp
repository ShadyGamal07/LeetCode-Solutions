class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int>ans;
        for(int i=0 ; i<arr.size() ; i++){
            int tp=arr[i]*arr[i];
            ans.push_back(tp);
        }
        
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};