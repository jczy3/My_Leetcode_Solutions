class Solution {
public:
    int findMin(vector<int>& nums) {
        int right{static_cast<int>(nums.size()-1)};
        int left{};
        while (left < right)
        {
            int mid{left + (right - left) / 2};
            if (nums[right] < nums[mid])
                left = mid + 1;
            else
                right = mid;
        }
        return nums[left];
    }
};
