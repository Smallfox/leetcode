class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length() == 0)
            return -1;
            
        unordered_map<char,int> m;
        for(int i = 0; i < s.length(); ++i)
            m[s[i]]++;
        
        int i = 0;
        for(i = 0; i < s.length(); ++i){
            if(m[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};
