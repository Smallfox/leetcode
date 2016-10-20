class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        int tmp = 0;
        for(int i = 0; i < s.length(); i++)
        {
            tmp = s[i] - 'A' + 1;
            num = num * 26 + tmp;
        }
        return num;
    }
};
