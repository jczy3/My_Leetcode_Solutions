class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int counter = 1;
        int ans = 0;
        
        for(int i{1}; i < static_cast<int>(nums.size()); ++i)
        {
            if (nums[i] != nums[i-1])
            {
                if (nums[i] - 1 == nums[i-1])
                    counter++;
                else
                {
                    ans = max(ans, counter);
                    counter = 1;
                }
            }
        }
        return max(ans, counter);
    }
};
