class Solution {
  public:
  void fun(vector<int>&a,int n,int idx,int sum,int tar,vector<int>diary,vector<vector<int>>&res){
    if(idx==n){
        if(sum==tar)
        res.push_back(diary);
        return;
    } 
    fun(a,n,idx+1,sum,tar,diary,res);

    if(a[idx]+sum<=tar){
        diary.push_back(a[idx]);
        sum+=a[idx];
        fun(a,n,idx,sum,tar,diary,res); 
        diary.pop_back();
         sum-=a[idx];
    } return ;
 }
    vector<vector<int>> targetSumComb(vector<int> &a, int tar) {
        // code here
       int n=a.size();
        int sum=0,idx=0;
        vector<int>diary;
        vector<vector<int>>res;
        fun(a,n,idx,sum,tar,diary,res);
        return res;
     
    }
};