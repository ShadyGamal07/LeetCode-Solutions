class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int k) {
        vector<bool> ans;
        int mx=0;
        for(int it:arr){
            if(it>mx){
                mx=it;
            }
        }
        
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] + k >= mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};