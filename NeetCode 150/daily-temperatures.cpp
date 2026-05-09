class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> soln(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++)
        {
            bool isWarm = false;
            stack<int> stk;
            for (int j = i + 1; j < temperatures.size(); j++)
            {
                if (temperatures[j] <= temperatures[i])
                {
                    stk.push(temperatures[j]);
                }
                else
                {
                    soln[i] = stk.size() + 1;
                    isWarm = true;
                    break;
                }
            }
            if (!isWarm)
                soln[i] = 0;
        }
        return soln;
    }
};
