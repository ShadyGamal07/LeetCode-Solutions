class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        list<int>l;
        for(int i=0 ; i <arr.size() ; i++){
            if(arr[i] == 0){
                l.push_front(arr[i]);
            }
            else if (arr[i]%2 == 0 ){
                l.push_front(arr[i]);
            }
            else{
                l.push_back(arr[i]);
            }
        }
        vector<int>ans;
        for(auto it : l){
            ans.push_back(it);
        }
        return ans;
    }
};