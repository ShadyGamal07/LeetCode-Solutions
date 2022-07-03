class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int>ans;
        for(int i=0 ; i<arr.size()-1 ; i++){
            for(int j=i+1 ; j<arr.size() ; j++){
                if(arr[i] + arr[j] == k){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};