#include <iostream>
using namespace std ;

// valid sudoku for rows , cols and diagonals 
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> down  (9, vector<int>(9,0)) ;
        vector<vector<int>> right (9, vector<int>(9,0)) ;
        vector<vector<int>> diagL (18 , vector<int>(9,0));
        vector<vector<int>> diagR (18 , vector<int>(9,0));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++) {
                if(board[i][j]!='.'){
                    int asci = (board[i][j])-49;
                    if( down[j][asci]==1 | right[i][asci]==1 | diagL[8-i+j][asci]==1 | diagR[i+j][asci]==1) return false;
                    else{
                        down[j][asci]=1;
                        right[i][asci]=1;
                        diagL[8-i+j][asci]=1;
                        diagR[i+j][asci]=1;
                    } 
                }
            }
        }
        return true ;
    }

/*
Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.*/
    bool isValidSudoku2(vector<vector<char>>& board) {
        vector<vector<int>> down  (9, vector<int>(9,0)) ;
        vector<vector<int>> right (9, vector<int>(9,0)) ;
        vector<vector<vector<int>>> diag(3, vector<vector<int>>(3, vector<int>(9, 0)));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++) {
                if(board[i][j]!='.'){
                    int asci = (board[i][j])-49;
                    if( (down[j][asci]==1 | right[i][asci]==1) | diag[i/3][j/3][asci]==1) return false;
                    else{
                        down[j][asci]=1;
                        right[i][asci]=1;
                        diag[i/3][j/3][asci]=1;                    } 
                }
            }
        }
        return true ;
    }
int main () {

}