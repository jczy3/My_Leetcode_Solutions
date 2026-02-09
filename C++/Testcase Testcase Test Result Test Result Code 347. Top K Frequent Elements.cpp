class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> numCnt;  //key = number, value = freq
        for (auto x : nums)
            ++numCnt[x];

        vector<vector<int>> buckets(nums.size() + 1);

        for (const auto& x : numCnt)
            buckets[x.second].push_back(x.first);

        vector<int> ans;

        for (int i {static_cast<int>(buckets.size() - 1)}; i >= 0; --i)
        {
            for (int num : buckets[i])
                ans.push_back(num);
            if (ans.size() == k)
                return ans;
        }
        return {};
    }
};
