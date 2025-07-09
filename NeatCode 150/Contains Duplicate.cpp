class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool>u_map;
        vector<int>::iterator first = nums.begin();
        vector<int>::iterator last = nums.end();
        while(first != last){
            if(u_map[*first]==false){ // not yet visited
                u_map[*first]=true;
                first ++;
            }
            else return true; // has duplicates
        }
        return false;
    } 
};