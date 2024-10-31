class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int s=0;
        int e=height.size()-1;
while(s<e){
if (height[s]==height[e]){
   if( ans<=height[s]*(e-s))
   {
    ans=height[s]*(e-s);
   } 
        s++;e--;
   }
else if (height[s]>height[e]){
        if( ans<=height[e]*(e-s))
   {
    ans=height[e]*(e-s);
   } 
    e--;
   }
else{
    if( ans<=height[s]*(e-s))
   {
    ans=height[s]*(e-s);
   }
s++;
   }
}
            return ans;
         }
};