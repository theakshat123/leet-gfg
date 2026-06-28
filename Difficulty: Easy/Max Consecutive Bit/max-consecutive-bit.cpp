class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
       int n=arr.size(),ans=0;
       if(n==1){
           return 1;
       }
       int cnt=1;
       for(int i=1;i<n;i++){
           if(arr[i]==arr[i-1]){
               cnt++;
           }
           else{
               cnt=1;
           } ans=max(ans,cnt);
       } return ans;
    }};