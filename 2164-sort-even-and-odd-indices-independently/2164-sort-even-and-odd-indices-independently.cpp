class Solution {
public:
    
    static bool cmp(int a , int b){
        if(a>b){
            return true;
        }
        return false;
    }
    
    vector<int> sortEvenOdd(vector<int>& arr) {
        
        vector<int>odd;
        vector<int>even;
        
        for(int i=0 ; i<arr.size() ; i++){
            if(i&1){
                odd.push_back(arr[i]);
            }
            else{
                even.push_back(arr[i]);
            }
        }
        
        sort(odd.begin() , odd.end() , cmp);
        sort(even.begin() , even.end());
        
        for(auto it : odd){
            cout<< it<<" ";
        }
        for(auto it : even){
            cout<< it<<" ";
        }
        
        vector<int>ans;
        int e=0;
        int o=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(i&1){
                ans.push_back(odd[o]);
                o++;
            }
            else{
                
                ans.push_back(even[e]);
                e++;
            }
        }
        return ans;
        
        
    }
};