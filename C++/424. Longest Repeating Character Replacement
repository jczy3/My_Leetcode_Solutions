class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq (26,0);
        int left{};
        int result{};
        int maxCount{};

        for (int right{}; right < s.size(); ++right)
        {
            maxCount = max(maxCount, ++freq[s[right] - 'A']);

            while ((right - left + 1) - maxCount > k)
            {
                --freq[s[left] - 'A'];
                ++left;
            }

            result = max(result, right - left + 1);
        }
        return result;
    }
};
