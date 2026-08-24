class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int left = 0;
    int maxLen = 0;
    unordered_map<char, int> alpha_index;
    
    if(s.empty()) return 0;
    if(s.size() == 1) return 1;

    for(int right = 0; right < s.size(); right++){
        auto it = alpha_index.find(s[right]); 
        
        // check if char exist
        if(it != alpha_index.end()){
            // advance the left pointer one step past the repeated char
            left = max(left, it->second + 1);
        }
        // register current char index
        alpha_index[s[right]] = right;
        
        maxLen = max(maxLen, right - left + 1);

    }
    return maxLen;
    }
};