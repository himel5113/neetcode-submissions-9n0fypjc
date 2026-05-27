class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> pr;
        map<int, int>mp;
        for(auto i : nums) mp[i]++;
        for(auto i : mp) {
            pr.push_back({i.first, i.second});
        }
        set<int> st;
        sort(pr.begin(), pr.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++) {
            st.insert(pr[i].first);
        }
        vector<int> ans(st.begin(), st.end());

        return ans;
    }
};
