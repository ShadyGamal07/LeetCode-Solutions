class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        int mx = -1;
        for(int i=arr.size()-1 ; i>=0 ; i--){
            if(i==arr.size()-1){
                ans.push_back(-1);
                if(arr[i] > mx){
                    mx=arr[i];
                }
                
            }
            else{
                ans.push_back(mx);
                if(arr[i] > mx){
                    mx=arr[i];
                }
            }
        }
        reverse(ans.begin() , ans.end() );
        return ans;
    }
};