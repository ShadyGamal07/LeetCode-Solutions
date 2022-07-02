class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        int ans=0;
        for(int i=0 ; i<arr.size()-1 ; i++){
            for(int j=i ; j<arr.size() ; j++){
                if( abs(arr[i] - arr[j]) == k ){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};