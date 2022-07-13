class Solution {
public:
    
   static bool cmp(pair<int,int> a , pair<int,int> b){
        if(a.first < b.first){
            return true;
        }
        if(a.first == b.first){
            if(a.second > b.second){
                return true;
            }
        }
        return false;
    }
    
    vector<int> frequencySort(vector<int>& arr) {
        
        map<int,int>m;
        for(int i=0 ; i<arr.size() ; i++){
            m[arr[i]]++;
        }
        vector<pair<int,int>>a;
        
        for(auto it:m){
            pair<int,int>tp;
            tp.first=it.second;
            tp.second=it.first;
            a.push_back(tp);
        }
        
        sort(a.begin() ,a.end() , cmp);
        
        
        
        vector<int> ans;
        for(auto it:a){
            //cout<<it.first<<"  "<<it.second<<endl;
            
            for(int i=0 ; i<it.first ; i++){
                ans.push_back(it.second);
            }
        }
        
        return ans;
        
    }
    
    
};