class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
            int low =1;
        int high = *max_element(arr.begin(),arr.end());
       int  mid;
        int ans=high;
      
      
      while(low<=high){
        mid=low+(high-low)/2;
         long long hour=0;
        for(int i=0;i<arr.size();i++){
         hour+=(arr[i]+mid-1)/mid;
        }
        if(hour<=k){
         ans=mid;
         high=mid-1;
        }
        else{
            low=mid+1;
        }
      } return ans;
    }
};