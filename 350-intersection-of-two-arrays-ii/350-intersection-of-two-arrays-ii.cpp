class Solution {
public:
    
    int r;
    
    bool is_here(int x , vector<int>arr){
    int a=0 , b=arr.size()-1 ;
    while(a<=b){
        int mid = (a+b)/2;
        if(arr[mid] == x){
            r = mid;
            return true;
        }
        else if(arr[mid] > x){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return false;
}
    
    
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());

    vector<int>ans;
    for(int i=0 ; i<arr1.size() ; i++){
        if(is_here(arr1[i] , arr2)){
            ans.push_back(arr1[i]);
            arr2.erase(arr2.begin() + r);
        }
    }

    return ans;
    }
};