class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int low=1,high=arr[n-1]-arr[0];
        int ans=high;
        while(low<=high){
            int mid = low+(high-low)/2;
            int cow=1,pos=arr[0];
            for(int i=1;i<n;i++){
             if(pos+mid<=arr[i]){
                 cow++,pos=arr[i];
             }   
            }
            if(cow<k){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
        } return ans;
    }
};