class Solution {
public:
    int countPrimeSetBits(int a, int b) {
        int ans=0;


    for(int i=a ; i<=b ; i++){
        int cnt = 0 , tp=i ;
        string str;
        while(tp>0){
            if(tp<2){
                if(tp==1){
                    cnt++;
                    str = to_string(tp)+str;
                }
            }
            else{
                if((tp%2)==1){
                    cnt++;
                    str = to_string(tp%2) + str;
                }
            }
            tp/=2;
        }


        bool flag = 0;
        if(cnt <= 1 ){
            flag = 1 ;
        }
        for(int i=2 ; i<=sqrt(cnt) ; i++){
            if(flag == 1){
                break;
            }
            if(cnt%i == 0){
                flag = 1;
                break;
            }
        }

        if(flag ==0){
            ans++;
        }

        
    }
    return ans;
    }
};