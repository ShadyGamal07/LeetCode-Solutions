class Solution {
public:
    
    bool f(string a , string b , map<char , int > m){
        for(int i=0 ; i<min(a.length() , b.length()) ; i++){
            if(m[a[i]] < m[b[i]]){
                return true;
            }
            else if(m[a[i]] > m[b[i]]){
                return false;
            }
        }
        if(a.length() > b.length()){
            return false;
        }
        return true;
    }
    
    bool isAlienSorted(vector<string>& arr, string str) {
        map<char , int>m;
        for(int i=0 ; i<str.length() ; i++){
            m[str[i]]=i;
        }
        
        for(int i=0 ; i<arr.size()-1 ; i++){
            if( f( arr[i] , arr[i+1] , m ) == false ){
                return false;
            }
        }
        
        return true;
        
    }
};