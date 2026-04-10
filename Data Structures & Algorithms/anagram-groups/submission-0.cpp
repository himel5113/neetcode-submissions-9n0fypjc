class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto s : strs) {
            vector<char> cnt(26, 0);
            for(auto c : s) cnt[c - 'a']++;
            string key = "";
            for(auto i : cnt) key += to_string(i) + '#';
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
