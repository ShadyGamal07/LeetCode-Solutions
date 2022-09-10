class Solution {
public:
    bool checkIfPangram(string str) {
        set<char>s;
        int n=str.length();
        for(int i=0 ; i<n ; i++){
            s.insert(str[i]);
        }
        
        if(s.size() == 26){
            return true;
        }
        return false;
    }
};