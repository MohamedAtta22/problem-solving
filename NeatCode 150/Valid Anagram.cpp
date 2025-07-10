class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> str1;  
      unordered_map<char,int> str2;
      for(auto i : s){
        str1[i]++;
      }
      for(auto i : t){
        str2[i]++;
      }
     if(str1 == str2) return true;
      else return false;
    }
};
