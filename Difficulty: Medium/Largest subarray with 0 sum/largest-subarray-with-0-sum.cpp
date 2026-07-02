class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<long long, int> mp;
        
        long long sum = 0;
        int ans = 0;
        
        mp[0] = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            if (mp.find(sum) != mp.end()) {
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;   // Store only the first occurrence
            }
        } return ans;
    }
};