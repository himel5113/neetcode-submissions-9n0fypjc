class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> vis;
        for(auto i : nums) {
            if(vis.contains(i)) return true;
            vis.insert(i);
        }
        return false;
    }
};