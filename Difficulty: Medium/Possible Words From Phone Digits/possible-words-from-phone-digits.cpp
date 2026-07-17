class Solution {
public:
    vector<string> ans;

    vector<string> phone = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(vector<int> &a, int index, string &temp) {
        if (index == a.size()) {
            ans.push_back(temp);
            return;
        }
        if (a[index] == 0 || a[index] == 1) {
        solve(a, index + 1, temp);
        return;
    }

        string letters = phone[a[index]];

        for (char ch : letters) {
            temp.push_back(ch);
            solve(a, index + 1, temp);
            temp.pop_back();
        }
    }

    vector<string> possibleWords(vector<int> &a) {
        ans.clear();
        string temp = "";
        solve(a, 0, temp);
        return ans;
    }
};