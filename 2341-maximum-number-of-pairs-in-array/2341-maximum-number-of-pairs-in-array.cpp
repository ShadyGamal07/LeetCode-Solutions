class Solution {
public:
    vector<int> numberOfPairs(vector<int>& arr) {
        map<int,int>m;
        for(int i=0 ; i<arr.size() ; i++){
            m[arr[i]]++;
        }
        
        // 1 -> 2
        // 3 -> 2
        // 2 -> 3 
        
        int still = 0, removed = 0;
        
        map<int,int>::iterator it=m.begin();
        
        for( ; it!=m.end() ; it++){
            removed += it->second/2;
            still += it->second%2;
        }
        
        vector<int>ans;
        ans.push_back(removed);
        ans.push_back(still);
        
        return ans;
        
        
    }
};