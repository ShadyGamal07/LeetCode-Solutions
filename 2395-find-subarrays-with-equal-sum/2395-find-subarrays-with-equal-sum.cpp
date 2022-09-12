class Solution {
public:
    bool findSubarrays(vector<int>& arr) {
//         // set<pair<int,int>>s;
//         set<int>sums;
        
//         for(int i=0 ; i<arr.size()-1 ; i++ ){
//             for(int j=i+1 ; j<arr.size() ; j++){
//                 int tp=arr[i]+arr[j];
//                 if(sums.count(tp)==true){
//                     cout<<tp<<endl;
//                     cout<<i<<"  "<<j<<endl;
//                     return true;
//                 }
//                 else{
//                     cout<<tp<<"  * "<<endl;
//                     sums.insert(tp);
//                 }
//             }
//         }
        
//         return false;
        
        
        set<int>s;
        int n=arr.size()-1;
        for(int i=0 ; i<n ; i++){
            int tp=arr[i]+arr[i+1];
            if(s.count(tp)==true){
                return true;
            }
            else{
                s.insert(tp);
            }
            
        }
        return false;
    }
};