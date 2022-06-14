class Solution {
public:
    int numSpecial(vector<vector<int>>& arr) {
        int xx=arr.size();
    int yy=arr[0].size();
    vector<int>x;
    vector<int>y;

    for(int i=0 ; i<xx ; i++){
        int tp=0;
        for(int ii=0 ; ii<yy ; ii++){
            if(arr[i][ii] == 1){
                tp++;
            }
        }
        x.push_back(tp);
    }

    for(int i=0 ; i<yy ; i++){
        int tp=0;
        for(int ii=0 ; ii<xx ; ii++){
            if(arr[ii][i] == 1){
                tp++;
            }
        }
        y.push_back(tp);
    }

    int ans=0;
    for(int i=0 ; i<xx ; i++){
        for(int ii=0 ; ii<yy ; ii++){
            if(arr[i][ii] == 1 && x[i]==1 && y[ii]==1){
                ans++;
            }
        }
    }
    return ans;
    }
};