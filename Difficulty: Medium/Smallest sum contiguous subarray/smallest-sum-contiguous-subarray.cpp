class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int best=a[0],ans=a[0];
        for(int i=1;i<a.size();i++){
            int v1=a[i]+best;
            int v2=a[i];
            best=min(v1,v2);
            ans=min(ans,best);
        }return ans;
    }
};
