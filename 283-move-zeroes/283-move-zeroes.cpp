class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int>ans;
        int z=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==0){
                z++;
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        
        for(int i=0 ; i<z ; i++){
            ans.push_back(0);
        }
        arr =  ans;
    }
};