class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        if(ransomNote.size() == 0)
            return true;
        unordered_map<char,int> m;
        for(int i = 0; i < magazine.length(); ++i)
            m[magazine[i]]++;
            
        for(int i = 0; i < ransomNote.length(); ++i){
            if(m.find(ransomNote[i]) == m.end() || m[ransomNote[i]] == 0)
                return false;
            m[ransomNote[i]]--;
        }
        return true;
    }
};
