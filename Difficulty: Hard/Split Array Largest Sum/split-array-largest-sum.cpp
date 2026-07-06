class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=high;
        while(low<=high){
            int mid =low+(high-low)/2;
            int stud=1,book=0;
            for(int i=0;i<n;i++){
                if(book+arr[i]<=mid){
                    book+=arr[i];
                }
                else{
                    stud++,book=arr[i];
                }
            } 
            if(stud<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } return ans;
    }
};