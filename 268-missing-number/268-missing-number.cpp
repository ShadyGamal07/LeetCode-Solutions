class Solution {
public:
    
    static bool f(vector<int>& arr , int x){
        int a=0 , b=arr.size()-1 ;
        while(a<=b){
            int mid=(a+b)/2;
            if(arr[mid] == x){
                return true;
            }
            else if(arr[mid] > x){
                b=mid-1;
            }
            else{
                a=mid+1;
            }
        }
        return false;
    }
    
    int missingNumber(vector<int>& arr) {
        
        int n=arr.size()+1;
        sort(arr.begin() , arr.end());
        
        for(int i=0 ; i<n ; i++){
            if(f(arr , i) == false){
                return i;
            }
        }
        return 0;
    }
};