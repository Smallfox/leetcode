class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> n;
        int r = k % nums.size();
        if(r){
            for(int i = nums.size() - r; i < nums.size(); ++i)
                n.push_back(nums[i]);
            for(int i = 0; i < nums.size() - r; ++i)
                n.push_back(nums[i]);
            for(int i = 0; i < nums.size(); ++i)
                nums[i] = n[i];
        }
    }
};
