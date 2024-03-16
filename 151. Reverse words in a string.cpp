class Solution {
public:
    void removeExtraSpaces(string& s){
        int slowIndex = 0, fastIndex = 0;
        while(s.size() > 0 && fastIndex < s.size() && s[fastIndex] == ' '){
            fastIndex++;
        }
        for(; fastIndex < s.size(); fastIndex++){
            if(fastIndex > 0 && s[fastIndex] == s[fastIndex-1] && s[fastIndex] == ' '){
                continue;
            }
            else{
                s[slowIndex++] = s[fastIndex];
            }
        }
        if(slowIndex - 1 > 0 && s[slowIndex-1] == ' '){ // The index of slowIndex is important
            s.resize(slowIndex - 1);
        }
        else{
            s.resize(slowIndex);
        }
    }

    void reverse(string& s, int start, int end){
        for(int i = start, j = end; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }

    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.size() - 1);
        int start = 0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == ' ' || i == s.size()){
                reverse(s, start, i - 1);
                start = i + 1;
            }
        }
        return s;
    }
};
