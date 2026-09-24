using namespace std;
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        stack<char> stk;
        for(auto& c : s){
            // character is a closing bracket
            if(mp.count(c)){
                // check if stack is empty, or there is a mismatch
                if(stk.empty() || stk.top() != mp[c]){
                    return false;
                }
                else{
                    stk.pop();
                }
            }else{ // character is an opening bracket
                stk.push(c);
            }
        }
    return stk.empty();
    }
};