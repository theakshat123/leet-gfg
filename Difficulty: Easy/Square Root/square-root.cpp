class Solution {
  public:
    int floorSqrt(int x) {
        // code here
     if(x==0||x==1){
         return 1;
     }
     long long low=0,high=x,mid;
     long long ans =x;
     while(low<=high){
         mid=low+(high-low)/2;
         if(mid*mid==x){
             return mid;
         }
         else if(mid*mid<x){
             ans=mid;
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     } return ans;
    }
};