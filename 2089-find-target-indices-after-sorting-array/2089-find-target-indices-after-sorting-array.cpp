class Solution {
public:
    
    int f(vector<int>& arr, int k ){
        int a=0 , b=arr.size()-1 ;
        while(a<=b){
            int mid=(a+b)/2;
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] > k){
                b=mid-1;
            }
            else{
                a=mid+1;
            }
        }
        return -1;
    }
    
    vector<int> targetIndices(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end());
        vector<int>ans;
        
        int tp = f(arr , k);
        if(tp==-1){
            return ans;
        }
        else{
            for(int i=tp ; i<arr.size() ; i++){
                if(arr[i]==k){
                    ans.push_back(i);
                }
                else{
                    break;
                }
            }
            
            for(int i=tp-1 ; i>=0 ; i--){
                if(arr[i]==k){
                    ans.push_back(i);
                }
                else{
                    break;
                }
            }
            
        }
        
        sort(ans.begin() , ans.end());
        return ans;
        
    }
};