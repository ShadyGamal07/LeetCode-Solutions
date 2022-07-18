class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        
        while(n>0){
            int tp=n%10;
            sum+=tp;
            prod*=tp;
            
            n/=10;
        }
        
        return prod-sum;
    }
};