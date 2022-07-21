class Solution {
public:
    
    double cal_slope(int x , int y , vector<vector<int>>& arr){
    double ans=-500;
    int b = arr[y][0]-arr[x][0];
    if(b==0){
        return ans;
    }
    int t = arr[y][1]-arr[x][1];
    ans=(t/b);
    return ans;
}
    
    bool checkStraightLine(vector<vector<int>>& arr) {
        double init_slope=cal_slope(0,1,arr);
    for(int i=1 ; i<arr.size()-1 ; i++){
        if(cal_slope(i,i+1,arr) != init_slope){
            return false;
        }
    }
        
    if(cal_slope(0,arr.size()-1,arr) != init_slope){
            return false;
    }
        
    return true;
    }
};