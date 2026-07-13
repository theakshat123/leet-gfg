class Solution {
  public:
   bool sorte(vector<int>&arr,int idx){
       int n=arr.size();
       if(idx==n-1){
           return true;
       }
       if(arr[idx]>arr[idx+1]){
           return false;
           
       } return sorte(arr,idx+1);
   }
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        return sorte(arr,0);
    }
};