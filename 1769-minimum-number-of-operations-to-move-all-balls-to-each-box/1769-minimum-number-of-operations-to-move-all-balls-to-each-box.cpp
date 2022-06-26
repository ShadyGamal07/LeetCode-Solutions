class Solution {
public:
    vector<int> minOperations(string str) {
        int n = str.length();
    vector<int>ans;
    for(int i=0 ; i<n;i++){
        int cnt=0;
        for(int j=0 ; j<n ; j++){
            if(str[j]=='1' && i!=j){
                cnt+=abs(j-i);
            }
        }
        ans.push_back(cnt);
    }

    return ans;
    }
};