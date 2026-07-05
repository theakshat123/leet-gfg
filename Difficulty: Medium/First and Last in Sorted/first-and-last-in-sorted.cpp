class Solution {
  public:
    vector<int> find(vector<int>& nums, int target) {
        // code here
        int first=-1,second=-1;
       int n=nums.size();
       int low=0,high=n-1;
       while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
           high= mid-1;
        }
       }
       low=0,high=n-1;
        while(low<=high){
        int mid = low+(high-low);
        if(nums[mid]==target){
            second=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
           high= mid-1;
        }
       }
       return{first,second};
    }
};