class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream ss(str);
        map<char, int>patdict;
        map<string, int>strdict;
        int i = 0, n = pattern.size();
        string word;
        while( ss >> word){
            if(i == n || strdict[word] != patdict[pattern[i]])
                return false;
            strdict[word] = patdict[pattern[i]] = i + 1;
            ++i;
        }
        return i == n;
    }
};
