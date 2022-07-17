class Solution {
public:
    int countOdds(int low, int high) {
        int a = high%2==0 ? high : high+1;
        a/=2;
        
        int b = low%2==0 ? low : low-1;
        b/=2;
        
        return a-b;
    }
};