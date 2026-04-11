class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq; // number : frequency
        priority_queue<pair<int, int>> p;
        vector<int> ans;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto &[key, value] : freq)
        {
            p.push({value, key});
        }
        int count = 0;
        while (!p.empty() && count < k)
        {
            ans.push_back(p.top().second);
            p.pop();
            count++;
        }
        return ans;
    }
};
