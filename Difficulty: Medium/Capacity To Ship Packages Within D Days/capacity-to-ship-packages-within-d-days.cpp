class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int load=0,day=1;
            for(int i=0;i<n;i++){
                if(load+arr[i]<=mid){
                    load+=arr[i];
                    
                }
                else{
                    day++;
                   load =arr[i];
                }
            }
            if(day<=D){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return ans;
        
    }};