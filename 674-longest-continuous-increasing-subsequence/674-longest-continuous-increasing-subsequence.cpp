class Solution {
public:
    int findLengthOfLCIS(vector<int>& arr) {
        int ans=1;
        for(int i=0 ; i<arr.size()-1 ; i++){
            int cnt= 1;
            int tp = arr[i];
            for(int j=i+1 ; j<arr.size() ; j++){
                if(tp<arr[j]){
                    cnt++;
                    tp=arr[j];
                }
                else{
                    break;
                }
            }
            if(cnt>ans){
                ans=cnt;
            }
        }
        
        return ans;
    }
};