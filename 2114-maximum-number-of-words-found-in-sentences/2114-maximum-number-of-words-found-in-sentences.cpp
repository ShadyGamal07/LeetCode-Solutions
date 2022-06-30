class Solution {
public:
    int mostWordsFound(vector<string>& arr) {
        int ans=0;
        for(auto it : arr){
            int cnt=0;
            for(int i=0 ; i<it.size() ; i++){
                if(it[i]==' '){
                    cnt++;
                }
            }
            cnt++;
            if(ans<cnt){
                ans=cnt;
            }
        }
        return ans;
    }
};