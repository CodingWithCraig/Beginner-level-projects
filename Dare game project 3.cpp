#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
	int option;
	
	do{
		srand (time(NULL));
	
	int random = rand() % 7;
//	cout << random << "\n";
	
	cout << "+*+*+*+*+*+*+*+*\n";
	cout << "Today we will be playing a daring game\n";
	cout << "+*+*+*+*+*+*+*+*\n";
	cout << "1. Play\n";
	cout << "2.Exit\n\n";
	cout << "Input your option below\n";
	cin >> option;
	
	switch (option){
		
		case 1:
			
			if (random == 1){
				cout << "Kiss the person infront of you\n\n\n";
			} 
			else if (random == 2 ) {
				cout << "Twerk for one player of the opposite gender\n\n\n";
			}
			else if (random == 3) {
				cout << "Go out side and dance\n\n\n";
			}
			else if(random == 4){
				cout << "Strip\n\n\n";
			}
			else if (random == 5) {
				cout << "Tell you biggest secret\n\n\n";
			}
			else if (random == 6) {
				cout << "Tell a player to slap you and don't fight back\n\n\n";
			}
			break;
			
			
		case 2:
			cout << "Thank you for playing the game\n";
			break;
			
		default: 
		
		     cout << "Invalid selection\n";
		    break;
	}
	
	}while(option != 2);
	
}
