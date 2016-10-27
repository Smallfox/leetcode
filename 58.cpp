class Solution {
public:
    int lengthOfLastWord(string s) {
        int wl = 0;
        stack<char> st;
        for(int i=0; i<s.length(); ++i)
                st.push(s[i]);
        
        int ps = st.size();
        for(int i=0; i<ps; ++i){
            if(st.top() == ' '){
                st.pop();
            }
            else{
                st.pop();
                wl++;
                if(st.empty() == true || st.top() == ' ')
                    return wl;
            }
            
        }
        return wl;
    }
};
