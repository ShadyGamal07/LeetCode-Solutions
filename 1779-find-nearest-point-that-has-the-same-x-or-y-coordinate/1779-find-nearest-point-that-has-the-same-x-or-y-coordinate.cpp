class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& arr) {
        int ans=-1;
        int ans2=-1;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(x==arr[i][0] || y==arr[i][1]){
                int tp = abs(x-arr[i][0])+abs(y-arr[i][1]);
                if(ans==-1){
                    ans=tp;
                    ans2=i;
                }
                else{
                    if(tp<ans){
                        ans=tp;
                        ans2=i;
                    }
                }
            }
        }
        
        return ans2;
    }
};