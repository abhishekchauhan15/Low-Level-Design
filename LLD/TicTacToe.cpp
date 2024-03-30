#include<bits/stdc++.h>
using namespace std;

// input 1,2
// isWinner()
//  - right input
//   - under NxN -> tie
//   - row, col matching
//    - 2 dig matching 
//  assignValue()
// printBoard()

class TacTacToe{
    private:
        int board[3][3];
        string player1;
        string player2;
        int col;
        int row;

    public:
        TacTacToe(string player1, string player2) :
            player1("X"),
            player2("O"){

            }

    void takeInput(int row, int col){
        cin >> row;
        cin >> col;
    }


    bool validInput(int row, int col, int n){
        if (row > n || col > n){
            return false;
        }
    }

    void assignValue(int row , int col, int n, int value){
            if (board[row][col] != NULL){
                board[row][col] = value;
            }
    }


    bool isWinner(int row , int col, int n){
        //row , col

        for(int i=0; i<n; i++){
                if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
                    return true;
                
                if(board[0][i] == board[1][i] && board[1][i]==board[2][i])
                    return true;
        }

        //diag

        for (int j = 0; j <n; j++){
            if(board[j][j]==board[j+1][j+1] && board[j+1][j+1]== board[j+2][j+2]){
                return true;
            }

        }

        for (int k = n - 1; k > 0; k--){
            if (board[k][k]==board[k-1][k-1] && board[k-1][k-1]==board[k-2][k]){
                return true;
            }
        }
    }


    void printBoard(int board[3][3]){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << board[i][j]<<"|";
            }

            cout << "-------------"<< endl;
        }
    }
    


};


int main(){

    return 0;
}