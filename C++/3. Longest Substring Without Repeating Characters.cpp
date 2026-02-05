class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int maxLen = 0;
        int left = 0;

        for(int i = 0; i < s.size(); ++i)
        {
            while (seen.contains(s[i]))
            {
                seen.erase(s[left]);
                ++left;
            }
            seen.insert(s[i]);
            maxLen = max(maxLen, i-left+1);
        }
        return maxLen;
    }
};
