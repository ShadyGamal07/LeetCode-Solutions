class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& arr1, vector<string>& arr2) {
        string str1,str2;
        for(int i=0 ; i<arr1.size() ; i++){
            str1+=arr1[i];
        }
        
        
        for(int i=0 ; i<arr2.size() ; i++){
            str2+=arr2[i];
        }
        if(str1==str2){
            return true;
        }
        return false;
    }
};