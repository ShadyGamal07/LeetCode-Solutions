class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        vector<int> ans;
        for(int i=0 ; i<2 ; i++){
            for(int ii=0 ; ii<arr.size() ; ii++){
                ans.push_back(arr[ii]);
            }
        }
        
        return ans;
    }
};