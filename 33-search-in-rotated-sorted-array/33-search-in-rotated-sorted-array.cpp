class Solution {
static int searchIndex(vector<int>& nums, int left, int right, int target){
    int mid = (left + right) / 2;
    if(left > right){
        return -1;
    }

    if(nums[mid] == target){
        return mid;
    }

    if(nums[left] <= nums[mid]){
        if(nums[left] <= target && nums[mid] >= target){
            return searchIndex(nums, left, mid - 1, target);
        } else {
            return searchIndex(nums, mid + 1, right, target);
        }
    } else {
        if(nums[right] >= target && nums[mid] <= target){
            return searchIndex(nums, mid + 1, right, target);
        } else {
            return searchIndex(nums, left, mid - 1, target);
        }
    }
};

public:
    int search(vector<int>& nums, int target) {
        return searchIndex(nums, 0, nums.size() - 1, target);
    }
};