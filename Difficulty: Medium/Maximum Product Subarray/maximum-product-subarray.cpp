class Solution {
  public:
    int maxProduct(vector<int> &nums) {
        // code here
          int maxi = nums[0], mini = nums[0], ans = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        int v1 = nums[i];              
        int v2 = maxi * nums[i];
        int v3 = mini * nums[i];

        maxi = max(v1, max(v2, v3));
        mini = min(v1, min(v2, v3));

        ans = max(ans, maxi);          // only maxi needed
    }

    return ans;
    }
};