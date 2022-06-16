class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
    for(int i=0 ; i<arr.size() ; i++){
        s.insert(arr[i]);
    }
    for(auto it : s){
        if(s.count(it*2) && it!=0){
            return true;
        }
        if(it == 0){
            int cnt=0;
            for(int i=0 ; i<arr.size() ; i++){
                if(arr[i] == 0){
                    cnt++;
                }
            }
            if(cnt>1){
                return true;
            }
        }
    }

    return false;
    }
};