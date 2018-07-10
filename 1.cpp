class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int targetTmp = target;
        for(int i=0;i<nums.size();++i){
            targetTmp = targetTmp - nums[i];
            sum.push_back(i);
            for(int j=i+1;j<nums.size();++j){
                if(targetTmp - nums[j] == 0) {
                    sum.push_back(j);
                    return sum;              
                }
            }
            targetTmp = targetTmp + nums[i];
            sum.pop_back();
        }
        return sum;
    }
};
