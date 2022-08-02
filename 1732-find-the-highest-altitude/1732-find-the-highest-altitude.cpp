class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        int ans=0;
        int crt=0;
        for(int i=0 ; i<arr.size() ; i++){
            crt+=arr[i];
            if(crt>ans){
                ans=crt;
            }
        }
        
        return ans;
    }
};