class Solution {
public:
    string reverseString(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s;
        else{
            string reversedStr;
            for(int i = s.length() - 1; i >= 0; --i ){
                reversedStr = reversedStr + s[i];
            }
            return reversedStr;
        }
    }
};
