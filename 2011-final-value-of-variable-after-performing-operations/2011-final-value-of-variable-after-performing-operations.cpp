class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int ans=0;
        for(auto it : arr){
            if(it[0] =='+' || it[2]=='+'){
                ans++;
            }
            else{
                ans--;
            }
        }
        return ans;
    }
};