class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for(int i = 0; i <= num; ++i)
            result.push_back(compute(i));
        return result;
    }
    
    int compute(int num){
        int count = 0;
        while(num){
            num &= (num -1);
            count++;
        }
        return count;
    }
};
