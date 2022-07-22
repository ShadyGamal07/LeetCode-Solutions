class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n = arr.size();
        
        
        for(int i=0 ; i<n ; i++){
            int cnt=1;
            while( ((n-1)-i+1) >= cnt ){
                
                int start=i;
                for(int j=0 ; j<cnt ; j++){
                    ans+=arr[start];
                    start++;
                }
                cnt+=2;
            }
                        
        }
        
        return ans;
    }
};