class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& arr) {
     
        map<string , int>m;
        
        vector<string> x ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(int i=0 ; i<arr.size() ; i++){
            string tp;
            for(int j=0 ; j<arr[i].size() ; j++){
                tp+=x[arr[i][j] - 97];
            }
            
            m[tp]++;
        }
        
        
        return m.size();
    }
};