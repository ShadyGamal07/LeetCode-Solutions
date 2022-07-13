class Solution {
public:
    int gcd(int a ,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int ans = gcd(arr[0],arr[arr.size()-1]);
        return ans;
        
    }
};