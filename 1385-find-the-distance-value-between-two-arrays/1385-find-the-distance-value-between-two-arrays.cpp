class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
    for(int i=0 ; i<arr1.size() ; i++){
        for(int ii=0 ; ii <arr2.size() ; ii++){
            if(abs(arr1[i] - arr2[ii]) <= d ){
                cnt++;
                break;
            }
        }
    }
    return arr1.size()-cnt;
    }
};