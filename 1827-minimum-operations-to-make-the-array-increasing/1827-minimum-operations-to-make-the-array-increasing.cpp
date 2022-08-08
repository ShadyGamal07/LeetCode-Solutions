class Solution {
public:
    int minOperations(vector<int>& arr) {
        if(arr.size() == 1){
            return 0;
        }
        
        int ans=0;
        for(int i=0 ; i<arr.size()-1 ; i++){
            if(arr[i+1] - arr[i] < 0  ){
                ans+=abs(arr[i+1] -arr[i])+1;
                arr[i+1] += abs(arr[i+1] -arr[i])+1;
               
            }
            else if(arr[i+1] - arr[i] == 0 ){
                ans++;
                arr[i+1]++;
            }
        }
        
        return ans;
    }
};