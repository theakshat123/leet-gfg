// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        int n = txt.size();
        int m = pat.size();

        if (m > n) {
            return 0;
        }

        int count = 0;

        for (int i = 0; i < m; i++) {
            freq1[pat[i] - 'a']++;
        }

        int low = 0;

        for (int high = 0; high < n; high++) {
            // add current character of txt
            freq2[txt[high] - 'a']++;

            int size = high - low + 1;

            if (size == m) {
                if (freq1 == freq2) {
                    count++;
                }

                freq2[txt[low] - 'a']--;
                low++;
            }
        }

        return count;
    }
};