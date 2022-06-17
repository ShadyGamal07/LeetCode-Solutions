class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        sort(arr.begin() , arr.end());

    int tp=1,tp2=1;

    vector<int>::iterator it = arr.end();
    it--;
    tp2*=*it;
    for(int i=0 ; i<3 ; i++){
        tp*=*it;
        it--;
    }   

    for(int i=0 ; i<2 ; i++){
        tp2*=arr[i];
    }

    return tp>tp2? tp : tp2;
    }
};