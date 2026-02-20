class Solution {
public:
    int maxArea(vector<int>& height) {
        int area{};
        int left{};
        int right = static_cast<int>(height.size() - 1);
        while (left < right)
        {
            int cHeight = (height[right] >= height[left]) ? height[left] : height[right];
            area = max(area, cHeight * (right - left));
            if (height[left] > height[right])
                --right;
            else
                ++left;
        }
        return area;
    }
};
