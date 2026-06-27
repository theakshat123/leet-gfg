class Solution {
  public:
    int maxWater(vector<int> &height) {
        // code here
       int i=0,j=height.size()-1; int area;
       int maxarea=0;
       while(i<=j){
           int h=min(height[i],height[j]);
           int width=j-i;
           area=width*h;
           maxarea=max(area,maxarea);
           if(height[i]<=height[j]){
               i++;
           }
           else{
               j--;
           }
       }  return maxarea;
            
        
    }
};