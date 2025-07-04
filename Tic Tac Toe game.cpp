#include <iostream>
#include <string>
using namespace std;
char PlayerO = 'O';
char PlayerX = 'X';
char currentPlayer = PlayerO;

char board[3][3] = {
	{'1' , '2' , '3' },
	{'4' , '5' , '6' },
	{'7' , '8' , '9' }
};

class TicTacToe{
	int move;
	int move2;

public:
	bool rulesforo() {

		if (PlayerO == board[0][0] && PlayerO == board[1][0] && PlayerO == board[2][0]) {

			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[0][1] && PlayerO == board[1][1] && PlayerO == board[2][1]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[0][2] && PlayerO == board[1][2] && PlayerO == board[2][2]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[0][0] && PlayerO == board[0][1] && PlayerO == board[0][2]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[1][0] && PlayerO == board[1][1] && PlayerO == board[1][2]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[2][0] && PlayerO == board[2][1] && PlayerO == board[2][2]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[0][0] && PlayerO == board[1][1] && PlayerO == board[2][2]) {
			cout << "Player O Wins\n";
			return true;
		}
		else if (PlayerO == board[0][2] && PlayerO == board[1][1] && PlayerO == board[2][0]) {
			cout << "Player O Wins\n";
			return true;
		}
		return false;
	};

	bool rulesforx() {
		if (PlayerX == board[0][0] && PlayerX == board[1][0] && PlayerX == board[2][0]) {

			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[0][1] && PlayerX == board[1][1] && PlayerX == board[2][1]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[0][2] && PlayerX == board[1][2] && PlayerX == board[2][2]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[0][0] && PlayerX == board[0][1] && PlayerX == board[0][2]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[1][0] && PlayerX == board[1][1] && PlayerX == board[1][2]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[2][0] && PlayerX == board[2][1] && PlayerX == board[2][2]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[0][0] && PlayerX == board[1][1] && PlayerX == board[2][2]) {
			cout << "Player X Wins\n";
			return true;
		}
		else if (PlayerX == board[0][2] && PlayerX == board[1][1] && PlayerX == board[2][0]) {
			cout << "Player X Wins\n";
			return true;
		}
		return false;

	};
	bool rules() {



			if (board[0][0] == 'O') {
				cout << "INVALID MOVE\n";
			return false;
			}
			else if (board[0][1] == 'O') {
			cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[0][2] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][0] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][1] == 'O') {
			cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][2] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][0] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][1] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][2] == 'O') {
				cout << "INVALID MOVE\n";
				return false;
			}

			else if (board[0][0] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[0][1] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[0][2] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][0] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][1] == 'X') {
			cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[1][2] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][0] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][1] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else if (board[2][2] == 'X') {
				cout << "INVALID MOVE\n";
				return false;
			}
			else {

				return true;
			}
	};


	//Need to fix this code below
	//It is the code that controls player input to make sure that they insert the required inputs and if they don't the code should keep the program from moving on to the next player

	 void instructions() {
		
			if (currentPlayer == PlayerO) {
				currentPlayer = PlayerX;
			}
			else {
				currentPlayer = PlayerO;
			}

			 //Someway somehow i need to fix my do while statement so that code can end
			cout << "It is player " << currentPlayer << "'s turn now (Please choose the number of where you want to make your move)\n";
			cout << "(NOTE) IF YOU PLAY ANY NUMBER THAT'S NOT WITHIN THE RANGE (1-9) THE GAME WILL CRASH\n ";
			cout << "Please make your move (insert numbers from 1-9): ";


			



			cin >> move;
			
			//Fixed
			if (!isdigit(move) && move < 1 || move > 9) {
				cout << "__________________\n";
				cout << "Invalid input\n";
				cout << "__________________\n";
				//The below clear codes need to be fixed
				//cin.clear();
				//cin.ignore(1000, '\n');
				//return false;
				cout << "Player " << currentPlayer << " please play again\n";
				cout << "Note that if you also play an invalid move again game will end\n";
				cin >> move2;
				move = move2;
				if (!isdigit(move2) && move2 < 1 || move2 > 9) {
					cout << "__________________\n";
					cout << "Invalid again(GAME_OVER)\n";
					cout << "__________________\n";
					exit(1);
				}

			}
			else {
			};
		


	}
	 


	void gameplay() {


		if (move == 1) {
			board[0][0] = currentPlayer;
		}
		if (move == 2) {
			board[0][1] = currentPlayer;
		}
		if (move == 3) {
			board[0][2] = currentPlayer;
		}
		if (move == 4) {
			board[1][0] = currentPlayer;
		}
		if (move == 5) {
			board[1][1] = currentPlayer;
		}
		if (move == 6) {
			board[1][2] = currentPlayer;
		}
		if (move == 7) {
			board[2][0] = currentPlayer;
		}
		if (move == 8) {
			board[2][1] = currentPlayer;
		}
		if (move == 9) {
			board[2][2] = currentPlayer;
		}
		
	}

	void grid() {

		for (int i = 0; i < 3; i++) {
			cout << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "\n";
			if (i < 2) {
				cout << "-|" << "-|" << "-\n";
			};

		}

	}
};



int main() {

	cout << "{PLEASE NOTE THAT YOU CANNOT PLAY WHERE SOMEONE HAS ALREADY PLAYED BECAUSE YOU ARE GOING TO BREAK THE PROGRAM.}\n";
	cout << "{MIND TO KNOW THAT WE ARE STILL TRYING TO FIX THAT ERROR, WHEN WE DO IT WILL BE ENFORCED AS SOON AS POSSIBLE}\n";
	cout << "+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*++*+**++**++*+*+*+*+*+*+*+*+*+*+\n";
	TicTacToe game;

	bool GameOver = false;

	
	do {
		
		game.grid();
		
		game.instructions();
		//The rules functions is the one with the problems now
		//game.rules();
		
			game.gameplay();
			
		if (game.rulesforx()) {
			 GameOver = true;
		}
		if (game.rulesforo()) {
			 GameOver = true;

		};
	} while (!GameOver);
	

	return 0;
}