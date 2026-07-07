class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int n=txt.size(),m=pat.size();
        if(m>n){
            return 0;
        }
        int ans = 0;
        vector<int>freq1(26,0);
         vector<int>freq2(26,0);
         
         for(int i=0;i<m;i++){
             freq1[txt[i]-'a']++;
             freq2[pat[i]-'a']++;
             
         }
         if(freq1==freq2){
             ans ++;
         }
         for(int i=m;i<n;i++){
             freq1[txt[i]-'a']++;
             freq1[txt[i-m]-'a']--;
             
             if(freq1==freq2)
                 ans ++;
             
         } return ans;
    }
};