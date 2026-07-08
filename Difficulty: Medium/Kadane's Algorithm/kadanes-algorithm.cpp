class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int best=arr[0],ans=arr[0];
        for(int i=1;i<n;i++){
            int v1=arr[i];
            int v2=best+arr[i];
            best=max(v1,v2);
            ans=max(best,ans);}
         return ans;
    }
};