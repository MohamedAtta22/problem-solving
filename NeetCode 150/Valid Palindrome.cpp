class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto& st : s){
            if(isalnum(st)){str += tolower(st);}
        }
         int j = str.size() - 1;
        for(int i = 0; i <= str.size()/2; i++){
            if(str[i] == str[j]){
                j--;
                continue;
                }
            else return false;
        }
        return true;
    }
};
