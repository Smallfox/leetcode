class Solution {
public:
    vector<vector<int> > generate(int numRows) {  
        // Note: The Solution object is instantiated only once and is reused by each test case.  
        vector<vector<int> > res;  
        if(numRows == 0)  
            return res;  
        for(int i = 1; i <= numRows; i++)  
        {  
            vector<int> onelevel;  
            onelevel.clear();  
            onelevel.push_back(1);  
            for(int j = 1; j < i; j++)  
            {  
                onelevel.push_back(res[i-2][j-1] + (j < i-1 ? res[i-2][j] : 0));  
            }  
            res.push_back(onelevel);  
        }  
        return res;  
    }  
};
