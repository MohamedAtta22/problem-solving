class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_string = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].empty()){
                return "";
            }
            int cond = min(common_string.size(), strs[i].size());
            common_string.resize(cond);
            for(int j = 0; j < cond; j++){
                if(strs[i][j] == common_string[j]){
                    continue;
                }
                else{
                    common_string.erase(common_string.begin() + j, common_string.end());
                    break;
                }
            }
        }
        return common_string;
    }
};