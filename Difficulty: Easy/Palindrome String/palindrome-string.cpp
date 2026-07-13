class Solution {
  public:
  
   bool fun(string &s,int low,int high){
      // int len=high-low+1;
       if(low>=high){
           return true;
       }
       if(s[low]!=s[high]){
           return false;
       }
       return fun(s,low+1,high-1);
   }
    bool isPalindrome(string& s) {
      int n=s.size();
    
      return fun(s,0,n-1);
    }
};