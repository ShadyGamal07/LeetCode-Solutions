class Solution {
public:
    vector<int> createTargetArray(vector<int>& arr, vector<int>& iii) {
        vector<int> ans;
        for(int i=0 ; i<arr.size() ; i++){
            ans.insert(ans.begin()+iii[i] , arr[i] );
        }
        
        return ans;
    }
};