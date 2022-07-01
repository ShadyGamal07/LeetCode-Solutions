class Solution {
public:
    string restoreString(string str, vector<int>& num) {
        vector<char>tp(str.length());
        int i=0;
        for(auto it : num){
            tp[it]=str[i];
            i++;
        }
        string ans;
        for(char it : tp){
            ans.push_back(it);
        }
        return ans;
    }
};