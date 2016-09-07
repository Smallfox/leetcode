class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.length()-1;
        while(start < end){
            if(isVowel(s[start]) && isVowel(s[end])){
                char tmp = s[end];
                s[end] = s[start];
                s[start] = tmp;
                start++;
                end--;
            }
            else{
                if(!isVowel(s[start]))
                    start++;
                if(!isVowel(s[end]))
                    end--;
            }
        }
        return s;
    }
private:
    bool isVowel(char c){
        if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
            return true;
        return false;
    }
};
