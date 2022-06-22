class Solution {
public:
    int arrangeCoins(int x) {
        long long a=0 , b=x, mid, ans;
    while (a<=b){
        mid = (a+b)/2;
        if((mid*(mid+1))/2 <= x){
            ans=mid;
            a=mid+1;
        }
        else if((mid*(mid+1))/2 > x){
            b=mid-1;
        }
    }
    return ans;
    }
};