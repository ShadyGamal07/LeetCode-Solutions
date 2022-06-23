class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a=0 , b=arr.size()-1 ;
    while(a<=b){
        int mid=(a+b)/2;
        if(arr[mid] > arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
            break;
        }
        else if(arr[mid] > arr[mid+1] && arr[mid]<arr[mid-1]){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
         return 0;
    }
   
};