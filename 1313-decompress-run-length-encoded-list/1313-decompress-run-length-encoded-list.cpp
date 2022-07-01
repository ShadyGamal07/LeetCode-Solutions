class Solution {
public:
    vector<int> decompressRLElist(vector<int>& arr) {
        vector<int> ans;
        for(int i=0 ; i<arr.size() ; i+=2){
            for(int ii=0 ; ii<arr[i] ; ii++){
                ans.push_back(arr[i+1]);
            }
        }
        return ans;
    }
};