class Solution {
  public:
    // Function to return list containing first n fibonacci numbers
      void solve(int a, int b, int n, vector<int> &ans) {
        if (n == 0)
            return;

        ans.push_back(a);
        solve(b, a + b, n - 1, ans);
    }

    vector<int> fibonacciNumbers(int n) {
        vector<int> ans;
        solve(0, 1, n, ans);
        return ans;
    }

};