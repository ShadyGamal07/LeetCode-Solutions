class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        arr.insert(arr.begin() , INT_MIN);
    arr.push_back(INT_MAX);

    int a=0 , b=arr.size()-1 ,mid,ans;

    while(a<=b){
        mid = a+(b-a)/2;
        if(arr[mid] >= k ){
            b=mid-1;
            ans=mid;
        }
        else{
            a=mid+1;
        }
    }
    return ans-1;
    }
};