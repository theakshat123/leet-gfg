class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
         int sum=0;int cnt=0;
      unordered_map<int,int>fre;
      fre[0]=1;
      for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int ques=sum-k;
        cnt+=fre[ques];
       fre[sum]++;
      } return cnt;
    }
};