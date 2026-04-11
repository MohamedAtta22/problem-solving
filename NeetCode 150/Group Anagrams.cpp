class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>> dict; // key=>string : value=> size
        vector<vector<string>> solnArr;
        for(auto word : strs){
            string key = word; // save the word in a variable to not manipulate the original string
            sort(key.begin(), key.end()); // normalize the key string
            dict[key].push_back(word);
        }
        for(auto it : dict){
        solnArr.push_back(it.second);
        }
        return solnArr;
    }
};