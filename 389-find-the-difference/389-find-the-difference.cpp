class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>ss;
        for(int i=0 ; i<s.length() ; i++){
            ss[s[i]]++;
        }
        
        map<char,int>tt;
        for(int i=0 ; i<t.length() ; i++){
            tt[t[i]]++;
        }
        
        for(auto it:tt){
            if(ss[it.first] != tt[it.first]){
                return it.first;
            }
        }
        return 's';
    }
};