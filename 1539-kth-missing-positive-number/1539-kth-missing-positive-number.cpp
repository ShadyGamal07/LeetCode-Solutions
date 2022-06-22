class Solution {
public:
    bool v(int k ,vector<int> arr ){
    int a=0 , b=arr.size()-1 , mid;
    while(a<=b){
        mid=(a+b)/2;
        if(arr[mid] == k){
            return true;
        }
        else if(arr[mid] > k){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return false;
}
    
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=0;

    for(int i=1 ; i<=200000 ; i++){
        if(v(i,arr) ){
            continue;
        }
        else{
            cnt++;
        }
        if(cnt==k){
            return i;
        }
    }
    return 0;
    }
};