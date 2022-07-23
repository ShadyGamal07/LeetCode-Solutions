class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& arr, int r, int c) {
        int rr=arr.size();
        int cc=arr[0].size();
                
        if(rr*cc  != r*c){
            return arr;
        }
        
        vector<vector<int>>ans;
        vector<int>tp;
        int cnt=0;
        
        
        for(int i=0 ; i<arr.size() ; i++){
            for(int j=0 ; j<arr[i].size() ; j++){
                tp.push_back(arr[i][j]);
                cnt++;
                if(cnt==c){
                    ans.push_back(tp);
                    tp.clear();
                    cnt=0;
                }
            }
        }
        
        
    return ans;    
    }
    
    
    
};