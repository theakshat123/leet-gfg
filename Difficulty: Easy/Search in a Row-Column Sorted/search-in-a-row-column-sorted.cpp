class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int n=arr.size();
       int m=arr[0].size();
       
       int row=0,col=m-1;
       while(row<n && col>=0){
          if(arr[row][col]==x){
              return true;
          } 
          else if(arr[row][col]>x){
              col--;
          }
          else{
              row++;
          }
       } return false;
    }
};