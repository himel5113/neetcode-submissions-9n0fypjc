class Solution {
public:
    bool isAnagram(string s, string t) {
        if((int)s.size() != (int)t.size()) return false;
        unordered_map<char, int> cntS, cntT;
        for(int i = 0; i < (int)s.size(); i++) {
            cntS[s[i]]++;
            cntT[t[i]]++;
        }
        return cntS == cntT;
    }
};
