class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int cnt=0;
        for(int i=0 ; i<s1.length() ; i++){
            if(s1[i]!=s2[i]){
                cnt++;
            }
        }
        
        if(cnt>2){
            return false;
        }
        
        string a=s1;
        string b=s2;
        
        sort(s1.begin(),s1.end());
        sort(s2.begin() , s2.end());
        
        
        
        if(s1==s2 && (cnt==2 || cnt == 0)){
            return true;
        }
        return false;
    }
};