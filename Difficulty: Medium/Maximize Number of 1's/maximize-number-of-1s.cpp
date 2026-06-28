class Solution {
  public:
//   int find(vector<int> &a)
// {
//   int maxc=-1;
//   for(int i=0;i<256;i++)
//   maxc=max(maxc,a[i]);
//   return maxc;
// }

    int maxOnes(vector<int>& arr, int k) {
   //   vector<int> freq(26, 0);

       int n=arr.size();
      int left=0,zero=0,ans=0;
      for(int right=0;right<n;right++){
        if(arr[right]==0)
            zero++;
        
   while(zero>k){
    if(arr[left]==0)
        zero--;
        left++;
      
   } ans=max(ans,right-left+1);
      }  return ans; 
    }
};
