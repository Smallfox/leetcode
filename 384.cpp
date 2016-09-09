class Solution {
    vector<int> before;
    vector<int> after;
    
    void swap(int pos1, int pos2){
        int tmp = after[pos1];
        after[pos1] = after[pos2];
        after[pos2] = tmp;
    }
public:
    Solution(vector<int> nums){
        before = nums;
        after = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return before;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int tmp = after.size();
        for(int i = 0; i < tmp; ++i){
            int random = rand() % tmp;
            swap(i, random);
        }
        return after;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
