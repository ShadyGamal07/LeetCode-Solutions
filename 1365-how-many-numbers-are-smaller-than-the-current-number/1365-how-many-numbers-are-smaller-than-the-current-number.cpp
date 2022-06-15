class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        vector<int>ans;
    map<int , int > m;

    for(int i=0 ; i<arr.size() ; i++){
        if(m.count(arr[i])){
            ans.push_back(m[arr[i]]);
        }
        else{
            int cnt=0;
            for(int ii=0 ; ii<arr.size() ; ii++){
                if(arr[ii] < arr[i]){
                    cnt++;
                }
            }
            m[arr[i]]=cnt;
            ans.push_back(m[arr[i]]);
        }

    }

    return ans;
    }
};