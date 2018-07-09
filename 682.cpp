class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> digitvec;
        for(auto &vec : ops){
            if(vec == "+")
                digitvec.push_back(digitvec.back() + digitvec[digitvec.size()-2]);
            else if(vec == "D")
                digitvec.push_back(digitvec.back()*2);
            else if(vec == "C")
                digitvec.pop_back();
            else
                digitvec.push_back(stoi(vec));
        }
        
        return accumulate(digitvec.begin(), digitvec.end(), 0);
    }
};
