class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        if(left < 1 || right > 10000)
            return vec;
        for(left; left<=right ; ++left){
            if(isSelfDividingNumber(left))
                vec.push_back(left);
        }
        return vec;
    }
    
    bool isSelfDividingNumber(int num){
        int residual = num;
        while(residual){
            if(residual%10 == 0)
                return false;
            else if((num % (residual % 10)) == 0){
                residual = residual / 10;
            }
            else
                return false;          
        }
        return true;
    }
};
