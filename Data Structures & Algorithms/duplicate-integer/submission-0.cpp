class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for(int i = 0; i < (int)nums.size() - 1; i++) {
            cnt += (nums[i] == nums[i + 1]);
        }
        return cnt > 0;
    }
};