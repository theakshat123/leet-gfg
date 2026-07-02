class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& arr, int k) {
        // Your code goes here
        long long  sum=0;
        int res=0;
       unordered_map<int,int>f;
       f[0]=1;
       for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0)
        rem+=k;
        res+=f[rem];
        f[rem]++;
       }return res;
    }
};
