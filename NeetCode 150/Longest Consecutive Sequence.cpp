class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numSet)
        {
            if (!numSet.count(num - 1))
            {
                int current = num;
                int length = 1;
                while (numSet.count(current + 1))
                {
                    current++;
                    length++;
                }
                longest = longest > length ? longest : length;
            }
        }
        return longest;
    }
};
