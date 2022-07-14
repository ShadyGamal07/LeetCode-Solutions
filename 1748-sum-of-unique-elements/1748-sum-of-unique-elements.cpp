class Solution {
public:
    int sumOfUnique(vector<int>& arr) {
        int ans=0;
        map<int,int>m;
        for(int i=0 ; i<arr.size() ; i++){
            m[arr[i]]++;
        }
        
        map<int,int>:: iterator it=m.begin();
        for( ; it!=m.end() ; it++){
            if(it->second == 1){
                ans+=it->first;
            }
        }
        
        return ans;
    }
};