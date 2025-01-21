class Solution {
public:
    string longestPalindrome(string s) {
//         int n = s.size();
//         if(n==2 && s[0]==s[1]) return s;
//         vector<vector<bool>> dp(n,vector<bool>(n, false));
//         int ans=1;
//         int index=0;
//         for(int i=0;i<n;i++){
//             dp[i][i]=true;
//         }
//         for(int i=0;i<n-1;i++){
//             if(s[i]==s[i+1]) {
//                 dp[i][i+1]=true;
//                 index=i;
//                 ans=2;
//             }
//         }

int diff=2;
while(diff<n){
   for(int i=0,j=2;j<n;i++){
    j=i+diff;
    if(dp[i+1][j-1]==true  && s[i]==s[j]){
          dp[i][j]=true;
          ans=j-i+1;
          index=i;
       }
            }
    diff++;
}
        return s.substr(index,ans);

        int ans = 1;
        int ind1= 0;
int n =  s.size();
    for(int i=0;i<n-1;i++){
        if(ans<=n-i-1){
        for(int j=n-1;j>i;j--){
            if(ans>j-i) break;
            int st=i;
            int e=j;
            while(st<=e  && s[st]==s[e]){
                st++; e--;
            }
            if(st>=e){
                ind1=i;
                ans=j-i+1; 
        }
        }
        } else return s.substr(ind1,ans);
    }

    return s.substr(ind1,ans);
    }
};