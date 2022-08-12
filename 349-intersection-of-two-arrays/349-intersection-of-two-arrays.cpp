class Solution {
public:
    
    bool f(vector<int>& arr , int x){
        int a=0, b=arr.size()-1;
        while(a<=b){
            int mid=(a+b)/2;
            if(arr[mid]==x){
                return true;
            }
            else if(arr[mid] > x){
                b=mid-1;
            }
            else{
                a=mid+1;
            }
        }
        return false;
    }
    
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        set<int>s;
        sort(arr2.begin() , arr2.end());
        
        for(int i=0 ; i<arr1.size(); i++){
            if( !s.count(arr1[i]) ){
                if(f(arr2 , arr1[i])){
                    s.insert(arr1[i]);
                    ans.push_back(arr1[i]);
                }
            }
        }
        
        return ans;
        
        
    }
};