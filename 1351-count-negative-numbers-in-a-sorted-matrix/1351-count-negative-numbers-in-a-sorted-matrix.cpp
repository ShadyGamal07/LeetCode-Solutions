class Solution {
public:
    
    int first_ng(vector<int>arr){
    int a=0 , b=arr.size()-1 , ans=-1;
    while(a<=b){
        int mid = (a+b)/2;
        if(arr[mid] < 0){
            ans=mid;
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return ans;
}
    
    int countNegatives(vector<vector<int>>& arr) {
        int cnt=0;
    int width = arr[0].size();
    for(int i=0 ; i<arr.size() ; i++){
        int tp = first_ng(arr[i]);
        if(tp==-1){
            continue;
        }
        else{
            cnt+=width-tp;
        }
        
    }

    return cnt;
    }
};