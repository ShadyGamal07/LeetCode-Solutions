class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& arr1, vector<int>& arr2) {
        set<int>s1;
        set<int>s2;
        
        for(int i=0 ;i<arr1.size() ; i++){
            s1.insert(arr1[i]);
        }
        
        for(int i=0 ; i<arr2.size() ; i++){
            s2.insert(arr2[i]);
        }
        
        vector<vector<int>>ans;
        vector<int>tp;
        for(auto it:s1){
            if(s2.count(it)==false){
                tp.push_back(it);
            }
        }
        ans.push_back(tp);
        tp.clear();
        
        for(auto it:s2){
            if(s1.count(it)==false){
                tp.push_back(it);
            }
        }
        ans.push_back(tp);
        
        return ans;
        
    }
};