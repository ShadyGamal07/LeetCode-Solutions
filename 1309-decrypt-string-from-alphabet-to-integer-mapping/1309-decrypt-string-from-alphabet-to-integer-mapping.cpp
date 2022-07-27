class Solution {
public:
    
    string f(string x){
        string ans;
        int n=x.length();
        for(int i=0 ; i<n-2 ; i++){
            int n=x[i]-'0';
            n+=96;
            ans+=(char)n;
        }
        
        int nn=stoi( x.substr(n-2,2)) ;
        nn+=96;
        ans+=(char)nn;
        
        return ans;
    }
    
    string freqAlphabets(string s) {
        string ans;
        string tp;
        for(int i=0 ; i<s.length() ; i++){
           if(s[i]=='#'){
               ans+=f(tp);
               tp="";
           }
            else{
                tp+=s[i];
            }

        }
        for(int i=0 ; i<tp.length() ; i++){
            int n=tp[i]-'0';
            n+=96;
            ans+=(char)n;
        }
        return ans;
    }
};