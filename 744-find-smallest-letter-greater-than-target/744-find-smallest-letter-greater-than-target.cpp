class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char k) {
        int a=0 , b=arr.size()-1;
    char ans='*';
    while(a<=b){
        int mid = (a+b)/2;
        if(arr[mid] > k ){
            ans=arr[mid];
            b=mid-1;
        }
        else if(arr[mid] <= k ){
            a=mid+1;
        }
    }
    if(ans!='*'){
        return ans;
    }
    else{
        return arr[0];
    }
    }
};