class Solution {
public:
    int numOfPairs(vector<string>& arr, string k) {
        int ans=0;
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++){
            if(arr[i]+arr[j] == k && i!=j){
                ans++;
            }
        }
    }

    return ans;
    }
};