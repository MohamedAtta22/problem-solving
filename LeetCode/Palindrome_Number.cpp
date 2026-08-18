class Solution {
public:
    bool isPalindrome(int x) {
     if (x < 0 ){return false;}
     string str = to_string(x);
     int left = 0, right = str.size()-1;
     while(left < right){
        if(str[left] == str[right]){
            left++;
            right--;
            continue;
        }
        else return false;
     }   
     return true;
    }
};
