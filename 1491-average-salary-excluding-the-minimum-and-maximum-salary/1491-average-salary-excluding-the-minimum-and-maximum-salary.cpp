class Solution {
public:
    double average(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        double ans=0;
        for(int i=1 ; i<arr.size()-1 ; i++){
            ans+=arr[i];
        }
        
        ans/=arr.size()-2;
        return ans;
    }
};