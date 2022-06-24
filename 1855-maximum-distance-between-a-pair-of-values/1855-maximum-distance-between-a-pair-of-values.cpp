class Solution {
public:
    
    int get_index(vector<int>& arr , int x){
    int a=0 , b=arr.size()-1 , ans=-1;
    while(a<=b){
        int mid=(a+b)/2;
        if(arr[mid] >= x){
            ans=mid;
            a=mid+1;
        }
        else{
            b=mid-1;
        }
    }
    return ans;
}
    
    
    int maxDistance(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
    for(int i=0 ; i<arr1.size() ; i++){
        int fg = get_index(arr2,arr1[i]);
        if(fg>=i && (fg-i) > ans){
            ans=(fg-i);
        }
    }
    return ans;
    }
};