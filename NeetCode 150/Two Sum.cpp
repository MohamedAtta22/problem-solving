class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int difference;
        int current_num;
        unordered_map<int, int> map; // value : index
        for (int i = 0; i < nums.size(); i++)
        {
            current_num = nums[i];
            difference = target - current_num;

            // search
            if (map.find(difference) != map.end())
            {
                return {map[difference], i};
            }
            else
            {
                // append
                map[current_num] = i;
            }
        }
        return {};
    }
};
