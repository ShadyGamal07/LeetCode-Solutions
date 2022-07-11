class Solution {
public:
    
    int maxProduct(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        
        int a=arr[n-1];
        a--;
        
        int b=arr[n-2];
        b--;
        
        return a*b;
    }
};