class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1, sum = 0;
        while(left != right){
            sum = numbers[left] + numbers[right];
            if(sum == target){break;}
            else if(sum > target){
                right--;
            }
            else left++;
        }
        // 1-indexed
        return { (left + 1), (right + 1)};
    }
};
