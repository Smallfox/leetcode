class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return 0;
            
        int start = 0, end = nums.size()-1;
        int mid = 0;
        while(start <= end){
            mid = start+(end-start)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid-1;
            else if(nums[mid] < target)
                start = mid+1;
        }
        return end+1;
    }
};
