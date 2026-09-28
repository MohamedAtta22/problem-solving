class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool isSpace = false;
        for(auto& c : s){
            // if we found space and later a char
            // then set counter to zero and reset the flag
            if(isSpace && c!=' '){
                count = 0;
                isSpace = false;
            }
            // increment number of chars in a word
            if(c != ' '){
                count++;
            }
            // upon landing on a 'space' set the flag
            else {
                isSpace = true;
            }
        }
        return count;
    }
};