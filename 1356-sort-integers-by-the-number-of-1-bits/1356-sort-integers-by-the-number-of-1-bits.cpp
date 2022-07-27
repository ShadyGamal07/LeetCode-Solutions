class Solution {
public:
    
    static bool cmp(pair<int,int>a , pair<int,int>b){
        if(a.second < b.second){
            return true;
        }
        if(a.second == b.second){
            if(a.first < b.first){
                return true;
            }
        }
        return false;
    }
    
    int f(int n){
        int ans=0;
        while(n>0){
            if(n%2!=0){
                ans++;
            }
            n/=2;
        }
        
        return ans;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int,int>>p;
        
        for(int i=0 ; i<arr.size() ; i++){
            pair<int,int>tp;
            tp.first=arr[i];
            tp.second=f(arr[i]);
            
            p.push_back(tp);
        }
        
        sort(p.begin(),p.end(),cmp);
        
        vector<int>ans;
        for(int i=0 ; i<p.size() ; i++){
            ans.push_back(p[i].first);
        }
        
        return ans;
        
    }
};