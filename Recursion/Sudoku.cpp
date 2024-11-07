#include <iostream>
using namespace std;

void find(int i , vector<vector<char> >& board) {
if(i==9) return ;

for(int j=0;j<9;j++){
    cout << i << " " << j <<endl;
    if(board[i][j]=='.'){
    find(i+1, board);
    }
} 

}
    void solveSudoku(vector<vector<char> >& board) {
        
        find(0 , board);
    }
    
int main () {
    vector<vector<char> > board;
solveSudoku(board) ;

}