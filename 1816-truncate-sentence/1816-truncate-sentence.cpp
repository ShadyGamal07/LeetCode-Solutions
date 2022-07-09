class Solution {
public:
    string truncateSentence(string s, int k) {
        
        vector<string>arr;
        string tp;
        int cnt=k;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i] ==' ' && cnt>0){
                arr.push_back(tp);
                tp="";
                cnt--;
            }
            else{
                tp+=s[i];
            }
            if(cnt==0){
                break;
            }
        }
        if(cnt>0){
            arr.push_back(tp);    
        }
        
        string ans;
        for(auto it : arr){
            ans+=it;
            ans+=" ";
        }
        
        ans.pop_back();
        
        return ans;
        
        
    }
};