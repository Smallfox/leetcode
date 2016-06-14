class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ret;
        int numsSize = nums.size();
        for(int i = 0; i < numsSize; ++i)
            ret[nums[i]]++;
        for(int i = 0; i < numsSize; ++i){
            if(ret[nums[i]] == 1)
                return nums[i];
        }
        return 0;
    }
};
