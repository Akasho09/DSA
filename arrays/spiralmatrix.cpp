    vector<vector<int>> generateMatrix(int n) {
vector<vector<int>> ans(n, vector<int>(n, 0));
        int i=0;
        int j=0;
        int loop=0;
        int c = 1;
        while(c<=n*n){
        for(;j<n-loop;j++) {
        ans[i][j]=c++;
        }
        j--;
        i++;
        for(;i<n-loop;i++) {
        ans[i][j]=c++;
        }
        i--;
        j--;
        for(;j>=loop;j--) {
        ans[i][j]=c++;
        }
        j++;
        i--;
        loop++;
        for(;i>=loop;i--) {
        ans[i][j]=c++;
        }
        i++;
        j++;
        }
return ans ;
    }