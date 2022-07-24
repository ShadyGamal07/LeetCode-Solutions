class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string ans;
        for(int i=0 ; i<max(s1.length() , s2.length()) ; i++){
            if(i<s1.length()){
                ans+=s1[i];
            }
            if(i<s2.length()){
                ans+=s2[i];
            }
        }
        return ans;
    }
};