class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> soln;

        /*
         nums[i] + nums[j] + nums[k] = 0
                   nums[j] + nums[k] = -nums[i]
        */
        int left = 0, right = nums.size() - 1;
        for(int i = 0; i <= nums.size() - 3; i++){
            left = i + 1;
            right = nums.size() - 1;
            while(left != right){
                if(nums[i] + nums[left] + nums[right] == 0){
                    soln.push_back( { nums[i], nums[left], nums[right] } );
                    left++;
                }
                else if(nums[i] + nums[left] + nums[right] > 0){
                    right--;
                }
                else{ // (nums[i] + nums[left] + nums[right] < 0)
                    left++;
                }
            }
        }
        set<vector<int>> s(soln.begin(), soln.end());
        soln.assign(s.begin(), s.end());
        return soln;
    }        
};
