class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int res = 1;
        bool contains_zero = false;
        bool contains_zeros = false;
        int zero_index = -1;
        int zeros_count = 0;
        vector<int> soln(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                contains_zero = true;
                zero_index = i;
                if (zeros_count)
                {
                    contains_zeros = true;
                    break;
                }
                zeros_count++;
                continue;
            }
            else
                res *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (contains_zeros)
            {
                return soln;
            }
            else if (contains_zero)
            {
                soln[zero_index] = res;
            }

            else
            {
                soln[i] = (res / nums[i]);
            }
        }
        return soln;
    }
};
