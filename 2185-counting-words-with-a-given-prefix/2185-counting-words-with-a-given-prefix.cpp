class Solution {
public:
    
    bool f(string str , string  x){
        int cnt=0;
        for(int i=0 ; i<min(str.length() , x.length()) ; i++){
            if(str[i]!=x[i]){
                return false;
            }
            else{
                cnt++;
            }
        }
        if(cnt==x.length()){
            return true;
        }
        return false;
    }
    
    int prefixCount(vector<string>& arr, string x) {
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(f(arr[i],x)){
                cout<<arr[i]<<endl;
                ans++;
            }
        }
        
        return ans;
    }
    
};