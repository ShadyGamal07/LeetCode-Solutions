class Solution {
public:
    bool isPerfectSquare(int n) {
        long long  a=1 , b=n;
    while (a<=b){
        long long mid=(a+b)/2;
        if(mid * mid == n){
            return true;
        }
        else if(mid * mid > n){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return false;
    }
};