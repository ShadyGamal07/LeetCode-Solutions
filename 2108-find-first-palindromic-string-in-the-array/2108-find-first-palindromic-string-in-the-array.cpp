class Solution {
public:
    
    bool f(string str){
        int a=0 , b=str.length()-1;
        while(a<b){
            if(str[a] != str[b]){
                return false;
            }
            a++;
            b--;
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& arr) {
        for(int i=0 ; i<arr.size() ; i++){
            if(f(arr[i])){
                return arr[i];
            }
        }
        
        return "";
    }
};