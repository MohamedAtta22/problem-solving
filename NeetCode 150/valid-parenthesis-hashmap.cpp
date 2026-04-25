class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mp ={ {')', '('},
                                       {']', '['},
                                       {'}', '{'} 
                                       };
        for(auto& c : s){
            if(!stk.empty() && mp[c]==stk.top()){
                stk.pop();
            }
            else stk.push(c);
        }
        if(stk.empty()) return true;
        else return false;
    }
};
