class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int ans=(arr[arr.size()-2]*arr[arr.size()-1]);
        ans-=(arr[0] * arr[1]);
        return ans;
    }
};