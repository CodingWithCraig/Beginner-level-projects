#include <iostream>
#include <string>
#include <iomanip>
#include <vector>


using namespace std;

void accountCreation() {
	cout << "+*+*+*+*+*+*+*+*+*+\n";
	cout << "Choose an option Below::\n";
	cout << "+*+*+*+*+*+*+*+*+*+\n";
	
	cout << "1. Create an account\n";
	
	cout << "2. View account balance\n";
	
	cout << "3. Deposit funds\n";
	
	cout << "4. Withdraw funds\n";

	cout << "5. Exit\n";
	
	
	
};
        void viewBalance() {
	             cout << "Your balance is: R";
};



int main(){

	int choice;
	string name; 
	string surname;
	int ID;
	string confirmation;
	double deposit;
	double balance; 
	double withdraw;
	balance = 0;
	
	vector<int> referrals;
	
	
	
do{
    accountCreation();
	
	cin >> choice; 
	//TO KEEP THE SYSTEM FROM CRASHING INCLUDE THE FUNCTION BELOW
	std::cin.clear();
	fflush(stdin);
	
	
	switch(choice){
		
	
		case 1: 
	do{
	cout << "What is your name?\n";
	cin >> name;
	cout << "What is your Surname?\n";
	cin >> surname;
	cout << "Input your ID.\n";
	cin >> ID;
	
	referrals.push_back(ID);
	
	cout << "+*+*+*+*+*+*+*+*\n";
	cout << "Confirm that the information below is true\n";
	cout << "+*+*+*+*+*+*+*+*\n";
	cout << name << "\n" << surname << "\n" << ID << "\n";
	cout << "+*+*+*+*+*+*+*+*\n";
	cout << "If true type Confirm\n"; 
	cout << "If false type NO\n"; 
	cin >> confirmation;
}while(confirmation != "Confirm" || confirmation != "confirm");

cout << "Your Account has been created successfully and your ID will be your referral\n";
	break; 
	
		case 2: 
		viewBalance();
		cout << std::setprecision(2) << std::fixed << balance << "\n";
		break;
		
		case 3:
		cout << "Enter the amount\n";
		cin >> deposit;
		balance = (deposit + balance);
		viewBalance();
		cout << balance << "\n";
		break;
		
		case 4:
		cout << "Enter the amount\n";
		cin >> withdraw;
		if(withdraw < balance){
			balance = (balance - withdraw);
		viewBalance();
		cout << balance << "\n";
		}else {
			cout << "Insufficient Funds\n";
		}
			
		
		break;
		
		case 5:
		cout << "Thanks for visiting\n";
		return 0;
		 
		default: cout << "################\n";
	
		
		
		
		
		
		
		
		
		
	}
	
}while(choice != 5);
	
	
	
	
	
	
	
	
	return 0;
}
