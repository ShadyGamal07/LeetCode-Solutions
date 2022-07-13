class Solution {
public:
    int singleNumber(vector<int>& arr) {
        map<int,int>m;
        for(int i=0 ; i<arr.size() ; i++){
            m[arr[i]]++;
        }
        
        map<int,int>::iterator it=m.begin();
        int ans;
        for( ; it!=m.end() ; it++){
            if(it->second == 1){
                ans = it->first;
            }
        }
        
        return ans;
        
    }
};