template <typename Map>
bool map_compare (Map const &lhs, Map const &rhs) {
    // No predicate needed because there is operator== for pairs already.
    return lhs.size() == rhs.size()
        && std::equal(lhs.begin(), lhs.end(),
                      rhs.begin());
}

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char,int> srcMap;
        map<char,int> cmpMap;
        for(int i = 0; i < s.size(); ++i){
            srcMap[s[i]]++;
            cmpMap[t[i]]++;
        }
        
        if(map_compare(srcMap,cmpMap))
            return true;
        return false;
    }
};
