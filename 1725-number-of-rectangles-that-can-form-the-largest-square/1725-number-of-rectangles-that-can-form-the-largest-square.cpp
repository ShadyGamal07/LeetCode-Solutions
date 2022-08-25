class Solution {
public:
    
    static bool cmp(int a , int b){
        if(a<=b){
            return false;
        }
        return true;
    }
    
    int countGoodRectangles(vector<vector<int>>& arr) {
        vector<int>tp;
        for(int i=0 ;i<arr.size() ; i++){
            tp.push_back(min(arr[i][0] , arr[i][1]));
            //cout<<min(arr[i][0] , arr[i][1]) <<" ";
        }
        
        sort(tp.begin() , tp.end() , cmp);
        
        int ans=0;
        int s = tp[0];
        for(int i=0 ; i<tp.size() ; i++){
            if(tp[0] == tp[i]){
                ans++;
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};