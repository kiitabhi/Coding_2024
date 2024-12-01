#include <stdio.h>
#include <stdlib.h>

char board[3][3];
char currentPlayer;

void printBoard() {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%c | ", board[i][j]);
        }
        printf("\n");
        if(i != 2) {
            printf("-------------\n");
        }
    }
}

void checkWin() {
    int i;
    // Check rows
    for(i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            printf("Player %c wins!\n", board[i][0]);
            exit(0);
        }
    }
    // Check columns
    for(i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            printf("Player %c wins!\n", board[0][i]);
            exit(0);
        }
    }
    // Check diagonals
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
       (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        printf("Player %c wins!\n", board[1][1]);
        exit(0);
    }
}

void playGame() {
    int row, col;
    currentPlayer = 'X';
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    while(1) {
        printBoard();
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);
        if(row < 1 || row > 3 || col < 1 || col > 3) {
            printf("Invalid move, try again.\n");
            continue;
        }
        row--; col--;
        if(board[row][col] != ' ') {
            printf("Invalid move, try again.\n");
            continue;
        }
        board[row][col] = currentPlayer;
        checkWin();
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    printf("Welcome to TIC TAC TOE by Abhishek Dutta\n");
    playGame();
    return 0;
}