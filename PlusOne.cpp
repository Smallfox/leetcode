class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        if(!digits.size()) return digits;
        
        if(digits.size() == 1){
            digits[0] = digits[0] + 1;
            if(digits[0] >= 10){
                digits[0] = 1;
                digits.push_back(0);
            }//end if
            return digits;
        }//end if
        
        int dlen = digits.size();
        int idx = 0;
        digits[dlen-1] = digits.back() + 1;
        
        for(int i = dlen - 1; i > 0; --i){
            if(digits[i] >= 10){
                digits[i] = 0;
                digits[i-1] += 1;
            }//add carry
        }//end for loop
        
        vector<int> newd;
        
        if(digits[0] >= 10){
            newd.push_back(1);
            newd.push_back(0);
            idx = idx + 1;
        }
        
        for(idx; idx < dlen; ++idx){
            newd.push_back(digits[idx]);
        }
        
        return newd;
    }
};
