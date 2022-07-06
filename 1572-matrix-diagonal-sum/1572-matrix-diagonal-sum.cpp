class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int ans=0;
        int i=0 , j=arr[0].size()-1;
        for(int cnt=0 ; cnt<arr.size() ; cnt++){
            if(i==j){
                ans+=arr[cnt][i] ;
            }
            else{
                ans+=arr[cnt][i];
                ans+=arr[cnt][j];
            }
            i++;
            j--;
        }
        return ans;
        
    }
};