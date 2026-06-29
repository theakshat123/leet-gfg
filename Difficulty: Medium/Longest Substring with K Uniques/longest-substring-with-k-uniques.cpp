class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.size();
        unordered_map<char,int>f;
        int low=0,high=0,res=INT_MIN;
        for(high=0;high<n;high++){
            f[s[high]]++;
            while(f.size()>k){
                f[s[low]]--;
                if(f[s[low]]==0)
                f.erase(s[low]);
                low++;
            }
        
        if(f.size()==k){
            int len=high-low+1;
            res=max(res,len);
        }
            
        } 
         if(res == INT_MIN) {
            return -1;
        }

      
        return res;
    }
};