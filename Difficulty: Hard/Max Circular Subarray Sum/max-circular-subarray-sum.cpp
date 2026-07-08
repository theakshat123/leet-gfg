class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=arr[0],mini=arr[0],sum=arr[0];
        int max1=arr[0],min1=arr[0];
        for(int i=1;i<n;i++){
            sum+=arr[i];
            maxi=max(arr[i],arr[i]+maxi);
            max1=max(maxi,max1);
            mini=min(arr[i],arr[i]+mini);
            min1=min(mini,min1);
        } if (max1 < 0)
    return max1;
        
        return max(max1,sum-min1);
    }
};