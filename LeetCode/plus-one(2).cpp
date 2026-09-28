// Another solution for plus-one problem.
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for(int i = digits.size()-1; i >=0; i--){
            // if value is less than 9 increment it
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            // if the value is 9, set it to zero
            else{
            digits[i]=0;
            }
        }
            // in case of all '9' the program will reach this part
            // insert leading 1
            digits.insert(digits.begin(),1);
            return digits;        
    }
};