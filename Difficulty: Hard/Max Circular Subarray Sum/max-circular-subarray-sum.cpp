class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int maxi=arr[0],mini=arr[0],sum=arr[0],maxsum=arr[0];int minsum=arr[0];
        for(int i=1;i<arr.size();i++){
            sum+=arr[i];
            maxi=max(arr[i],arr[i]+maxi);
            maxsum=max(maxsum,maxi);
            mini=min(arr[i],arr[i]+mini);
            minsum=min(minsum,mini);
        }
            if(maxsum<0)
             return maxsum;
         return max(maxsum,sum-minsum);
    }
};