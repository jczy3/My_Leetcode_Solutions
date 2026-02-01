class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); ++i)
        {
            if (!seen.contains(nums[i]))
                seen.insert(nums[i]);
            else 
                return true;
        }
        return false;
    }
};
