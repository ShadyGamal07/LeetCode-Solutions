class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        int ans=0;
        for(int i=0 ; i<arr.size()-1 ; i++){
            for(int j=i+1 ; j<arr.size() ; j++){
                if(arr[i] == arr[j] && i*j % k ==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};