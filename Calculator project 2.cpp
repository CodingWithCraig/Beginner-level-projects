#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

void options() {
	cout << "++++++++++++++++++++\n";
	cout << "Choose an option you like below\n";
	cout << "++++++++++++++++++++\n\n";
	cout << "1. would you like to calculate?\n";
	cout << "2. Would you like to exit?\n";
};

void calculations(){
	cout << "+++++++++++++++\n";
	cout << "Choose below\n";
	cout << "+++++++++++++++\n";
	cout << "a. Addition\n";
	cout << "b. Subtraction\n";
	cout << "c. Multiplication\n";
	cout << "d. Division\n";
	cout << "e. Exit\n";
};


int main(){
	
	int option;
	string method;
	double x;
	double y;
	double z = 0;
	//trying to create a calculator program
	options();
	cin >> option;
	
	             //to prevent the system from crashing out.
                     std::cin.clear();
                     fflush(stdin);
switch(option){
	
	case 1: 

		do {
				calculations();
			cin >> method;
			
			if (method == "a") {
				
				cout << "Input x will be added with input y\n";
				cout << "####################\n";
				cout << "Input your x value below\n";
				cin >> x;
				cout << "Input your y value below\n";
				cin >> y;
				
				z = x + y;
				
				cout << "Answer = " << z << "\n";	
			}
			else if (method == "b") {
				cout << "Input y will be subtracted from input x\n";
				cout << "####################\n";
				cout << "Input your x value below\n";
				cin >> x;
				cout << "Input your y value below\n";
				cin >> y;
				
				z = x - y;
				
				cout << "Answer = " << z << "\n";
			}
			else if (method == "c") {
				cout << "Input x will be multiplied by input y\n";
				cout << "####################\n";
				cout << "Input your x value below\n";
				cin >> x;
				cout << "Input your y value below\n";
				cin >> y;
				
				z = x * y;
				
				cout << "Answer = " << z << "\n";
			}
			else if (method == "d") {
				cout << "Input x will be divided by input y\n";
				cout << "####################\n";
				cout << "Input your x value below\n";
				cin >> x;
				cout << "Input your y value below\n";
				cin >> y;
				
				z = x / y;
				
				cout << "Answer = " << z << "\n";
			}

	 
	
		} while (method != "e");
		
		break;
		
			case 2:
				cout << "Thank you for using our calculator\n";
				break;
		
	        default: cout << "Invalid choice\n"; 
	}






	return 0;


}


