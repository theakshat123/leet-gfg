class Solution {
public:
    void fun(string &s, int i, char c, string &ans) {
        if (i == s.size())
            return;

        if (s[i] != c)
            ans.push_back(s[i]);

        fun(s, i + 1, c, ans);
    }

    void removeCharacter(string &s, char c) {
        string ans;
        fun(s, 0, c, ans);
        s = ans;
    }
};