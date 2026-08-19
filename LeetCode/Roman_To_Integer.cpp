class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_to_int = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(i < s.size()-1 && roman_to_int[s[i]] < roman_to_int[s[i+1]]){
                sum -= roman_to_int[s[i]];
            }
            else sum += roman_to_int[s[i]];
        }
        return sum;
    }
};