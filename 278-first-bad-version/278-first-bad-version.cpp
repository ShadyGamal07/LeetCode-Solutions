// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long a=1 , b=n , mid , ans;
        while(a<=b){
            mid=(a+b)/2;
            if(isBadVersion(mid)){
                ans=mid;
                b=mid-1;
            }
            else{
                a=mid+1;
            }
        }
        
        return ans;
    }
};