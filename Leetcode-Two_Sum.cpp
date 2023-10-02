class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int NUMS_SIZE = nums.size();
        for (int i = 0; i < NUMS_SIZE - 1; i++)
        {
            for (int j = i + 1; j < NUMS_SIZE; j++)
            {
                if (nums[i] + nums[j] == target) return { i, j };
            }
        }
        return {};
    }
};