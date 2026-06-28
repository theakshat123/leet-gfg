class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        // code here
      int low=0,high=0,res=0;
      int n=arr.size(); long long p=1;
      if(k<=1){
            return 0;
        }
      for(high=0;high<n;high++){
         p*=arr[high];
         while(p>=k){
             p/=arr[low];
             low++;
         }int len=high-low+1;
         res+=len;
      } return res;
    }
};