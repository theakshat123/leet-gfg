class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int best=arr[0],ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=best+arr[i];
            int v2=arr[i];
            best=max(v1,v2);
         ans=max(best,ans);}
        return ans;
    }
};