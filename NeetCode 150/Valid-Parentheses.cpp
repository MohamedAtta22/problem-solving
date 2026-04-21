class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto& c : s){
            if (c =='(' || c == '[' || c=='{') {
            stk.push(c);
            }
            else if (!stk.empty() && ( (stk.top() == '{' && c == '}') 
                    || (stk.top() == '(' && c == ')')  
                    || (stk.top() == '[' && c == ']') ) )
            {
                stk.pop();
            }
            else return false;
        }
        if(stk.empty()) return true;
        else return false;
    }
};
