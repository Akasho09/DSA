#include <iostream>
#include <vector>
using namespace std;

//recursive sol
// int paths (int i,int j,int n , int m) {
// if (i==n-1 && j==m-1) return 1;       
// if (i>=n || j>=m) return 0;
// else return paths(i+1,j,n,m) + paths(i,j+1,n,m);
// }

// int nCr(int n, int r)
// {
//     int ans = 1;
//     if (r > n / 2)
//     {
//         r = n - r;
//     }
//     for (int i = 1; i <= r; i++)
//     {
//         ans *= n - i + 1;
//         ans/=i;
//     }
//     return ans;
// }

// int paths (int n , int m) {
// return nCr(n+m-2,n-1);
// }

    int uniquePaths(int m, int n) {
n=n+m-2;
 double ans = 1; // bcz divided first
 int r=m-1;
    if (r > n / 2)
    {
        r = n - r;
    }
    for (int i = 1; i <= r; i++)
    {
        ans/=i; //divide first so ans doesnt exceed ggiven condition 
        ans *= (n - r + i);
    }
        return int(ans);
}
int main () {
// cout << paths(0,0,3,7);
cout <<uniquePaths(7,3) <<endl;
cout <<uniquePaths(1,2) <<endl;
cout <<uniquePaths(6,10) <<endl;
cout <<uniquePaths(1,0) <<endl;
cout <<uniquePaths(51,9) <<endl;

}