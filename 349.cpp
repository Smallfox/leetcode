class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> shortSet;
        set<int> retSet;
        vector<int> retVec;
        
        if(nums1.size() > nums2.size()){
            vector<int> tmp;
            tmp = nums1;
            nums1 = nums2;
            nums2 = tmp;
        }
        
        for(auto i = nums1.begin(); i != nums1.end(); ++i)
            shortSet.insert(*i);
            
        for(auto i = nums2.begin(); i != nums2.end(); ++i){
            if(shortSet.count(*i) > 0)
                retSet.insert(*i);
        }
        
        for(auto i = retSet.begin(); i != retSet.end(); ++i)
            retVec.push_back(*i);
            
        return retVec;
    }
};
