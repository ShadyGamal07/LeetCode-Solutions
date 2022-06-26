class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>ans;
    map<int,int>m;
    for(int i=0 ; i<arr.size() ; i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second == 2){
            ans.push_back(it.first);
        }
    }

    return ans;
    }
};