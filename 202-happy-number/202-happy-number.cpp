class Solution {
public:
    
    int f(int n){
        int ans=0;
        while(n>0){
            int tp = n%10;
            tp*=tp;
            ans+=tp;
            n/=10;
        }
        
        return ans;
    }
    
    
    bool isHappy(int n) {
            for(int i=0 ; i<10000 ; i++){
            if(f(n)==1){
                return true;
            }
            else{
                n=f(n);
            }
        }
        
        return false;
        
    }
};