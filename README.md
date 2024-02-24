# Tic Tac Toe Game
This is a simple command-line implementation of the classic Tic Tac Toe game in C++, where you play against the computer.
## Features
* Allows a single player to play Tic Tac Toe against the computer.
* Supports input validation to ensure that players enter valid moves.
* Displays the current state of the board after each move.
* Determines the winner or declares a tie when the game is over.
* Implements a simple AI algorithm ( Minimax Algorithm ) for the computer's moves.

## How To Play
* Clone this repository to your local machine.
<!-- git clone https://github.com/your-username/tic-tac-toe.git -->
```bash
git clone https://github.com/guru-divine/Tic-Tac-Toe-C-.git
```
* Navigate to the directory.
```bash
cd tic-tac-toe
```
* Compile the source code.
```bash
g++ -o tic_tac_toe main.cpp
```
* Run the executable.
```bash
./tic_tac_toe
```
* Follow the on-screen instructions to play the game.

## Gameplay Instructions
* You will be playing as X, and the computer will be playing as O.
* Players take turns to mark a square on the 3x3 grid with their symbol (X or O).
* The first player to get three of their symbols in a row (horizontally, vertically, or diagonally) wins the game.
* If all squares are filled and no player has achieved a winning combination, the game is a tie.
