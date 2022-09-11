class Solution {
public:
    
    bool f(string& str, map<char,int>& m){
        map<char,int>tp;
        for(int i=0 ;i<str.length() ; i++){
            if(m.count(str[i])){
                tp[str[i]]++;
            }
            else{
                return false;
            }
        }
        for(auto it:tp){
            if(m[it.first]< it.second){
                return false;
            }
        }
        
        return true;
        
    }
    
    int countCharacters(vector<string>& arr, string str) {
        map<char,int>m;
        for(int i=0 ; i<str.length() ; i++){
            m[str[i]]++;
        }
        
        int ans=0;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(  f(arr[i],m)==true  ){
                ans+=arr[i].length();
            }    
        }
        
        return ans;
        
    }
};