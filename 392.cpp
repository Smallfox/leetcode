class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() == 0)
            return true;
        int index = 0;
        for(int i = 0; i < s.length(); ++i){
            
            while(index < t.length() && s[i] != t[index])
                index++;
            
            if(index >= t.length())
                return false;
            index++;
        }
        return true;
    }
};
