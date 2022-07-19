class Solution {
public:
    
    static bool cmp(int a,int b){
        if(a>b){
            return true;
        }
        return false;
    }
    
    bool f(int a , int b , int c){
        bool fg = true;
        if(a+b <= c ){
            return false;
        }
        if(a+c <= b){
            return false;
        }
        if(b+c <= a){
            return false;
        }
        return true;
    }
    int largestPerimeter(vector<int>& arr){
        
        sort(arr.begin(),arr.end(),cmp);
        
        
        for(int i=0 ; i<arr.size()-2;i++){
             if( f( arr[i] , arr[i+1],arr[i+2])){
                int tp   = arr[i]+arr[i+1]+arr[i+2];
                return tp;
            }
        }
        
        return 0;
        
        
    }

};