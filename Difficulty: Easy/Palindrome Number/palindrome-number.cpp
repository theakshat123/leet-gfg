class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
      
        long long num = abs((long long)n);
        long long original = num;
        long long rev = 0;

        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev == original;
    }
};