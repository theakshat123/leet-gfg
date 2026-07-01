class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
       for(int i=0;i<arr.size();i++){ 
        sum+=arr[i];}
       int left=0; int right;
        for(int i=1;i<arr.size();i++){
          left=left+arr[i-1];
            right=sum-arr[i]-left;
          if(left==right)
            return i;
        } return -1;
    }
};