class Solution {
public:
    
    bool f(string& a , string& b){
        if(a.length() > b.length()){
            return false;
        }
        for(int i=0 ; i<a.length() ; i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    
    int countPrefixes(vector<string>& arr, string s) {
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(f(arr[i] , s) == true){
                ans++;
            }
        }
        
        return ans;
    }
};