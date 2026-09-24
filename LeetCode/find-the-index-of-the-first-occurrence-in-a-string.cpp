class Solution {
public:
    int strStr(string haystack, string needle) {
        // haystack iterator
        for(size_t i = 0; i + needle.size() <= haystack.size(); i++ ) {
            bool flag = true;
        
            // needle iterator
            for(size_t j = 0; j < needle.size(); j++){
                if(haystack[i + j] != needle[j]){
                    flag = false;
                    break;
                }
            }
        
            if(flag){
                return i;
            }
        }
    return -1;
    }

};