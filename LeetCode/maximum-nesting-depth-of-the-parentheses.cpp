class Solution {
public:
    int maxDepth(string s) {
        int maxDepth=0,depth=0;

        for(auto& c : s){
            if(c=='('){
                depth++;
            }
            else if(c==')'){
                depth--;
            }
            else{ 
                // do nothing
            }
            maxDepth = max(maxDepth, depth);

        }
        return maxDepth;
    }
};