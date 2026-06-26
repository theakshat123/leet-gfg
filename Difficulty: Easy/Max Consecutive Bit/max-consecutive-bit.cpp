class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n==1){
            return 1;
        }
      int maxo=1;int ans=0;
      for(int i =1;i<n;i++){
        if(arr[i]==arr[i-1]){
          maxo++;
        }
        else{
            maxo=1;
        } 
        ans=max(ans,maxo);
      }  return ans;
    }
};