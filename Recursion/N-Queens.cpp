#include <iostream>
using namespace std ;

void find(int i , int n , vector <string> &board , vector<vector<string> >& ans ,vector <int>&leftrow , vector <int>&upperdiag , vector <int>&lowerdiag ) {
if(i==n){
    ans.push_back(board);
    return ;
}

for (int j=0 ; j<n ;j++) {
if((leftrow[j]==0 && upperdiag[n-1+i-j]==0) && lowerdiag[i+j]==0){

      board[i][j]='Q';
      leftrow[j]=1;
      upperdiag[n-1+i-j]=1;
      lowerdiag[i+j]=1;
    find (i+1 , n , board , ans , leftrow , upperdiag , lowerdiag) ;
      board[i][j]='.';
      leftrow[j]=0;
      upperdiag[n-1+i-j]=0;
      lowerdiag[i+j]=0;

}
  
}


}
    vector<vector<string> > solveNQueens(int n) {
    vector<vector<string> > ans ;
    vector<string> board(n, string(n, '.')); 
    vector <int> leftrow(n,0);
    vector<int> upperdiag(2*n-1,0);
    vector<int> lowerdiag(2*n-1,0);
    find (0 , n , board , ans , leftrow , upperdiag , lowerdiag) ;
      return ans ;
    }

int main () {

vector<vector<string>> ans2 = solveNQueens(4);
    
    for (int i = 0; i < ans2.size(); i++) {
        cout << "Solution " << i + 1 << ":" << endl;
        for (int j = 0; j < ans2[i].size(); j++) {
            cout << ans2[i][j] << endl;
        }
        cout << endl;
    }
    
    return 0;
}