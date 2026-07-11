class Solution {
  public:
  
    int fun(int n){
        if(n==0){
            return 1;
        }
   fun(n-1);
   cout<< n <<" ";
   
    }
    void printTillN(int n) {
        // code here
        fun(n);
    }
};