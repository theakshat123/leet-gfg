class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k>n){
            return -1;
        }
        long low=*max_element(arr.begin(),arr.end());
        long high=accumulate(arr.begin(),arr.end(),0LL);
        int ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int student = 1,page=0;
            for(int i=0;i<n;i++){
                if(page+arr[i]<=mid){
                    page+=arr[i];
                }
                else{
                    student++;
                    page=arr[i];
                }
            }
            if(student<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return ans;
    }
};