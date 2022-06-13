class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        vector<pair<int,int>> p;

    for(int i=0 ; i<v.size() ; i++){
        int cnt=0;
        pair<int , int >tp;
        for(auto it2 : v[i]){
            if(it2==1){
                cnt++;
            }
        }
        tp.first=cnt;
        tp.second=i;
        p.push_back(tp);
    }


    sort(p.begin() , p.end());
    vector<int>ans;
    for(int i=0 ; i<k ; i++){
        ans.push_back(p[i].second);
    }

    return ans;
    }
};