class Solution {
public:
    string defangIPaddr(string str) {
        string ans="";
        for(int i=0 ; i<str.length() ; i++){
            if(str[i]!='.'){
                ans+=str[i];
            }
            else{
                ans+="[.]";
            }
        }
        
        return ans;
    }
};