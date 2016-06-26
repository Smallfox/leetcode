struct {
    bool operator()(string lhs, string rhs){
        string s1 = lhs + rhs;
        string s2 = rhs + lhs;
        return s1 > s2;
    }
}compareStrInteger;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 0)
            return "";
        vector<string> vstr;
        for(int i = 0; i < nums.size(); ++i)
            vstr.push_back(to_string(nums[i]));
        std::sort(vstr.begin(), vstr.end(), compareStrInteger);
        string ret = "";
        for(int i = 0; i < vstr.size(); ++i)
            ret += vstr[i];
        if(ret[0] == '0')
            return "0";
        return ret;
    }
};
