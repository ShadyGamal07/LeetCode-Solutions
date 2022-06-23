class Solution {
public:
    
    int found(int x , vector<int>arr){
    int a=0 , b=arr.size()-1 , ans=-1 ;
    while(a<=b){
        int mid=(a+b)/2;
        if(arr[mid] == x){
            ans= mid+1;
           a=mid+1;

        }
        else if(arr[mid] > x){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return ans;
}

int getLeft(int x , vector<int> arr){
    int a=0,b=arr.size()-1,ans;
    while(a<=b){
        int mid=(a+b)/2;
        if(arr[mid] == x){
            b=mid-1;
            ans=mid+1;
        }
        else if(arr[mid] > x){
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    return ans;
}
    
    vector<int> twoSum(vector<int>& arr, int k) {
        set<int>s;
    vector<int>ans;
    for(int i=0 ; i<arr.size() ; i++){
        s.insert(arr[i]);
    }
    
    for(auto it : s){
        int tp=k-it;
        int tp2=found(tp,arr);
        if(tp2!=-1){
            ans.push_back(getLeft(it , arr));
            ans.push_back(tp2);
            break;
        }
    }
        return ans;
    }
};