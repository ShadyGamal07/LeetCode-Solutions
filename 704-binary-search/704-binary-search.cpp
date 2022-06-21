class Solution {
public:
    int search(vector<int>& arr, int k) {
        int a=0 , b=arr.size()-1 , mid;
    while(a<=b){
        
        mid = a+(b-a)/2;
        if(arr[mid] == k){
            return mid;   
        }
        else if(arr[mid] > k){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return -1;
    }
};