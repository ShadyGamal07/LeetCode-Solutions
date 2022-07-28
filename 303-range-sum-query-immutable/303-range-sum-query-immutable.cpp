class NumArray {
public:
    vector<int> global;
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] = nums[i]+nums[i-1];
        }
        
        global = nums;
    }
    
    int sumRange(int left, int right) {
        if(left==0) return global[right];
        else{
            return global[right] - global[left-1];
        }
    }
};