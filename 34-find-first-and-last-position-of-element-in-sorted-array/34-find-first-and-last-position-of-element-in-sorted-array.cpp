class Solution {
public:
    
    int l(vector<int> arr , int k){
    int a=0 , b=arr.size()-1 , mid,ans=-1;
    while(a<=b){
        mid=(a+b)/2;
        if(arr[mid] == k){
            ans=mid;
            b=mid-1;
        }
        else if(arr[mid] > k){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return ans;
}

int r(vector<int> arr , int k){
    int a=0 , b=arr.size()-1 , mid,ans=-1;
    while(a<=b){
        mid=(a+b)/2;
        if(arr[mid] == k){
            ans=mid;
            a=mid+1;
        }
        else if(arr[mid] < k){
            a=mid+1;
        }
        else{
            b=mid-1;
        }
    }
    return ans;
}
    
    
    
    vector<int> searchRange(vector<int>& arr, int k) {
        vector<int>ans;
    ans.push_back(l(arr,k));
    ans.push_back(r(arr,k));
        return ans;
    }
};