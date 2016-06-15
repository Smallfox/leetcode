class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> hashTable;
        vector<int> result;
        for(auto val: nums)
            hashTable[val]++;
        priority_queue<pair<int,int>> pque;
        for(auto val: hashTable)
            pque.push(make_pair(val.second,val.first));
        while(k--){
            auto val = pque.top();
            result.push_back(val.second);
            pque.pop();
        }
        return result;
    }
};
