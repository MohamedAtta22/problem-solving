class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(auto& str : strs){
            encoded_string += to_string(str.length()) + "#" + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int n = s.size();
        int i = 0;
        while(i < n){
            int length = 0;
            while(s[i] != '#'){
                length = length * 10 + (s[i] - '0');
                i++;
            }
            // skip the "#" symbol
            i++;
            decoded_string.emplace_back(s.substr(i, length));
            i += length;
        }
        return decoded_string;
    }
};
