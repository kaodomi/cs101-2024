#include <iostream>
#include <vector>

using namespace std;

class TicTacToe {
private:
    vector<vector<char>> board; //宣告了一個二維向量vector，每個元素都是一個字符char。命名為board。
    char currentPlayer; //哪位玩家
    bool gameEnded; //遊戲結束沒

public:
    TicTacToe() {
        board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        currentPlayer = 'X';
        gameEnded = false;
    }

    void run() {
        cout << "-- Tic Tac Toe -- CSIE@CGU\n";
        cout << "Player 1 (X) - Player 2 (O)\n";
        printBoard();

        for (int i = 0; i < 9; ++i) {
            if (gameEnded)
                break;

            int move;
            cout << "==> Player " << (currentPlayer == 'X' ? 1 : 2) << " (" << currentPlayer << "), enter a number:";
            cin >> move;

            if (isValidMove(move)) {
                makeMove(move);
                printBoard();
                if (checkWin()) {
                    cout << "==> Player " << (currentPlayer == 'X' ? 1 : 2) << " wins!\n";
                    gameEnded = true;
                } else if (checkDraw()) {
                    cout << "==> Game draw\n";
                    gameEnded = true;
                } else {
                    switchPlayer();
                }
            } else {
                cout << "==> Invalid value, please enter again\n";
                --i; // Repeat the current turn
            }
        }
    }

private:
    void printBoard() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << " " << board[i][j] << " ";
                if (j < 2)
                    cout << "|";
            }
            cout << endl;
            if (i < 2)
                cout << "---+---+---\n";
        }
    }

    bool isValidMove(int move) {
        if (move < 1 || move > 9)
            return false;

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        return board[row][col] != 'X' && board[row][col] != 'O';
    }

    void makeMove(int move) {
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        board[row][col] = currentPlayer;
    }

    bool checkWin() {
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                return true;
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                return true;
        }
        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
            return true;
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
            return true;
        return false;
    }

    bool checkDraw() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] != 'X' && board[i][j] != 'O')
                    return false;
            }
        }
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
};

int main() {
    TicTacToe game;
    game.run();
    return 0;
}
