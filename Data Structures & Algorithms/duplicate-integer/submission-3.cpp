class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> vis;
        for(auto i : nums) {
            if(vis.count(i)) return true;
            vis.insert(i);
        }
        return false;
    }
};