class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        
        int x = arr[0].size()-1;
        vector<vector<int>>ans;
        
        for(int i=0 ; i<arr.size() ; i++){
            vector<int>tp;
            for(int j=x ; j>=0 ; j--){
                if(arr[i][j] == 0){
                    tp.push_back(1);
                }
                else{
                    tp.push_back(0);
                }
            }
            ans.push_back(tp);    
        }
        
        return ans;
    }
};