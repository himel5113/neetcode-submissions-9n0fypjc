class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(auto c : s) {
            if(isalnum(c)) t += (tolower(c));
        }
        int l = 0, r = (int)t.size() - 1;
        while(l <= r) {
            if(t[l] != t[r]) {
                return false;
            }
            l++; r--;
        }
        return true;
    }
};
