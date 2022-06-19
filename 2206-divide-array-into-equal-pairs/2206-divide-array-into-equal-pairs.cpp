class Solution {
public:
    bool divideArray(vector<int>& arr) {
        map<int,int> m;
    for(int i=0 ; i<arr.size() ; i++){
        m[arr[i]]++;
    }
    for(auto it : m){
        if(it.second %2 !=0){
            return false;
        }
    }
    return true;
    }
};