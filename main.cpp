//Author: DIVYA RAJ (aka guru_divine)
#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define sz(arr) (int)arr.size()
#define vi vector<int>
#define all(arr) arr.begin(), arr.end()
using namespace std; 

int winCase[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

int winBoard(int *board) {
    for(int i=0; i<8; ++i) {
        if(board[winCase[i][0]] && board[winCase[i][0]]==board[winCase[i][1]] && board[winCase[i][1]]==board[winCase[i][2]]) {
            return board[winCase[i][0]];
        }
    }
    return 0;
}

void printBoard(int *board) {
    cout << "++---++---++---++" << nl;
    for(int i=0; i<3; ++i) {
        cout << "||";
        for(int j=0; j<3; ++j) {
            if(board[3*i+j]==0) cout << "   ||";
            else if(board[3*i+j]==-1) cout << " X ||";
            else cout << " O ||";
        }
        cout << nl << "++---++---++---++" << nl;
    }
}

int minimax(int *board, int player) {
    int winner = winBoard(board);
    if(winner!=0) return winner*player;

    int bestMove = -1, bestScore = -2;
    for(int i=0; i<9; ++i) {
        if(board[i]==0) {
            board[i] = player;
            int curScore = -minimax(board, player*-1);
            board[i] = 0; //reset board
            if(curScore>bestScore) {
                bestScore = curScore;
                bestMove = i;
            }
        }
    }
    if(bestMove==-1) return 0;
    return bestScore;
}

int computerMove(int *board) {
    int bestScore = -2, bestMove = -1;
    for(int i=0; i<9; ++i) {
        if(board[i]==0) {
            board[i] = 1;
            int curScore = -minimax(board, -1);
            board[i] = 0; //reset board

            if(curScore>bestScore) {
                bestScore = curScore;
                bestMove = i;
            }
        }
    }
    return bestMove;
}

void solve() {
    cout << "Welcome to the world of games" << nl;

    

    cout << "~~~~~TIC-TAC-TOE~~~~~" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 1 || 2 || 3 ||" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 4 || 5 || 6 ||" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 7 || 8 || 9 ||" << nl;
    cout << "++---++---++---++" << nl;

    int board[9] = {0};

    int cnt_moves = 0;
    while(cnt_moves < 9) {
        cout << "Enter your move: ";
        int player_mv; cin >> player_mv;
        player_mv--; //to make it 0-indexed
        
        if(board[player_mv]==0) {
            board[player_mv] = -1;
            cnt_moves++;
            printBoard(board);
            //player wins :)
            if(winBoard(board)!=0) break;
            
            int comp_mv = computerMove(board);
            board[comp_mv] = 1;
            cnt_moves++;
            cout << "Computer's move : " << comp_mv + 1 << nl;
            printBoard(board);
            //computer wins
            if(winBoard(board)!=0) break;

        } else {
            cout << "Illegal move, Please try again." << nl;
        }
    }

    if(winBoard(board)==0) cout << "Its a draw. You just saved your ass." << nl;
    else if(winBoard(board)==-1) cout << "You win. God Mode on" << nl;
    else cout << "You lose. Noob hai kya!!" << nl;




}

signed main() {
    solve();
    return 0;
}