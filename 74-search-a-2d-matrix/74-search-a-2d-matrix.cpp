class Solution {
public:
    
    bool bs(vector<int>arr , int k){
    int a=0 , b=arr.size()-1 ;
    while(a<=b){
        int mid = (a+b)/2;
        if(arr[mid] == k ){
            return true;
        }
        else if(arr[mid] > k){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return false;
}
    
    
    bool searchMatrix(vector<vector<int>>& arr, int k) {
        for(auto it : arr){
        if(bs(it,k)){
            return true;
        }
    }
    return false;
    }
};