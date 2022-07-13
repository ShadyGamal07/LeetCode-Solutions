class Solution {
public:
    
    int f(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;        
    }
    
    int findNumbers(vector<int>& arr) {
        
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(f(arr[i])%2==0){
                ans++;
            }
        }
        
        return ans;
    }
};