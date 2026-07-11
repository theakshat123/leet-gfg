class Solution {
  public:
   int fact(int n){
       if(n==0||n==1){
           return 1;
       }
       int ans = n*fact(n-1);
       return ans;
   }
    int factorial(int n) {
        // code here
        return fact(n);
    }
};