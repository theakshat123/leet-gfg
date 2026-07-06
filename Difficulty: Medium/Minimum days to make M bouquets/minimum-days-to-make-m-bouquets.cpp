class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n=arr.size();
        if((long long)m*k>n){
            return -1;
        }
        int low=*min_element(arr.begin(),arr.end());
        int high=*max_element(arr.begin(),arr.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int flower=0,bonquet=0;
            for(int i=0;i<n;i++){
                if(arr[i]<=mid){
                    flower++;
                }
                else{
                    flower=0;
                }
                if(flower==k){
                    bonquet++;
                    flower=0;
                }
            }
            if(bonquet>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return ans;
    }
};