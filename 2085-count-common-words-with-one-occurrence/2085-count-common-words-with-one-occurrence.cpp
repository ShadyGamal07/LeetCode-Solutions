class Solution {
public:
    int countWords(vector<string>& arr1, vector<string>& arr2) {
        
        int ans=0;
        
        map<string,int>m1;
        map<string,int>m2;
        
        for(int i=0 ; i<arr1.size() ; i++){
            m1[arr1[i]]++;
        }
        
        for(int i=0 ; i<arr2.size() ; i++){
            m2[arr2[i]]++;
        }
        
        for(auto it : m1){
            cout<<it.first<<" ";
            
            if(m2[it.first]== it.second && it.second == 1){
                ans++;
            }
        }
        
        return ans;
        
        
    }
};