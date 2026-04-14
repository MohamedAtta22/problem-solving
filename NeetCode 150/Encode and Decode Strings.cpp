class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(string str : strs){
            encoded_string += to_string(str.length());
            encoded_string += "#";
            encoded_string += str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string>decoded_string;
        string substring = "";
        string len="";
        for(int i = 0; i< s.length(); i++){
            while(s[i] != '#'){
                len += s[i];
                i++;
            }
            int length = stoi(len);
            i++;
            substring = s.substr(i, length);
            decoded_string.push_back(substring);
            i += length - 1;
            len = "";
        }
        return decoded_string;
    }
};
