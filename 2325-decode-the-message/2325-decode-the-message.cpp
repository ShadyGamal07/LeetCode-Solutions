class Solution {
public:
    string decodeMessage(string key, string str){
        
        map<char,char>m;
        char tp='a';
        
        for(int i=0 ; i<key.length() ; i++){
            if(key[i]==' '){
                continue;
            }
            else{
                if(m.find(key[i]) == m.end()){
                    m[key[i]]=tp;
                    tp++;
                }
               
            }
        }
        
        // for(auto it : m){
        //     cout<<it.first<<"  "<<it.second<<endl;
        // }
        
        string ans="";
        for(int i=0 ; i<str.length() ; i++){
            if(str[i]==' '){
                ans+=" ";
            }
            else{
                ans+=m[str[i]];
            }
        }
       
        
        return ans;
        
        
    }
};