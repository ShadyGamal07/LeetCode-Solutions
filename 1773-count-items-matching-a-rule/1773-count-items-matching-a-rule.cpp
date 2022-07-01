class Solution {
public:
    int countMatches(vector<vector<string>>& arr, string a, string b) {
        int ans=0 , target;
        string tp [] = {"type","color","name"};
        for(int i=0 ; i<3 ; i++){
            if(a==tp[i]){
                target=i;
                break;
            }
        }
        
        for(auto it : arr){
            if(it[target] == b){
                ans++;
            }
        }
        
        return ans;
    }
};