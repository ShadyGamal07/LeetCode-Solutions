class Solution {
public:
    
    static bool f(vector<int>& arr , int k){
        int a=0 , b=arr.size()-1;
        while(a<=b){
            int mid= a+(b-a)/2;
            if(arr[mid] == k){
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
    
    int findFinalValue(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end());
        while(f(arr , k)){
            k*=2;
        }
        
        return k;
    }
};