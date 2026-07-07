class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // code here
 int row=matrix.size(),col=matrix[0].size();
        int low=0,high=row*col-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int rows=mid/col;
            int cols=mid%col;
            if(matrix[rows][cols]==target){
                return true;
            }
            else if(matrix[rows][cols]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return false;
    }
};