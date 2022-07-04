class Solution {
public:
    int countConsistentStrings(string str, vector<string>& arr) {
        set<char>s;
        for(int i=0 ; i<str.length() ; i++){
            s.insert(str[i]);
        }
        
        int ans=0;
        for(int i=0 ;i<arr.size() ; i++){
            int fg=0;
            for(int ii=0 ; ii<arr[i].length() ; ii++){
                if( s.count(arr[i][ii])){
                    continue;
                } 
                else{
                    fg=1;
                    break;
                }
            }
            
            if(fg==0){
                ans++;
            }
        }
        
        return ans;
    }
};