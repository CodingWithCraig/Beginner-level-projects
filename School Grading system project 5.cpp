#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;



class Studentsystem{
	
	vector<string> studentid;
vector<double> grade;
//vector<string> status;
	
	string nameSurname;
	double mark;
	string promotion;
	int option;
	int number;
	

	public:
	void display(){
		
		cout << "Name and Surname: "<< studentid[number-1 ] << "\n"
		     << "Grade Average: " << fixed << setprecision(2) << grade[number -1] << "\n"
		     << "Status: ";
		     	if(grade[number -1] < 50){
			cout << "Failed.\n";
			
		}else{
			cout << "Pass\n";
		}
	}

void details(){
	cout << "_____________________\n";
	cout << "Enter full name and surname.\n\n";
	cin.ignore();
	getline(cin, nameSurname);
	studentid.push_back(nameSurname);
	cout << "_____________________\n";
	
	cout << "Enter the students mark below.\n";
	cout << "(make sure the entered mark is rounded off to 2 decimal places) \n\n";
	cin >> mark;
	grade.push_back(mark);
		cout << "_____________________\n";
		
		
		cout << "Student has been added to the system successfully.\n";
		
}	
	
	void checking(){//Main code
	do{
		cout << "_____________________\n";
		cout << "Choose an option below.\n";
		cout << "(If you no students were added before first start by adding a new student.\n";
		cout << "_____________________\n"
		     << "1.Check a Student.\n"
		     << "2.Add a student.\n"
		     << "3.Exit.\n";
		        
		         cin >> option;
		         
//		         std::clear();
//		         fflush(stdin);
		         
		         switch(option){
		         	
		         	case 1:
		         		cout << "Checking Student.\n"
		         		     << studentid.size() << " STUDENTS WERE ADDED.\n"
		         		     << "Write down the number of the student you want to check below.\n"
		         		     << "e.g (1)\n";
		         		     
		         		     cin >> number;
		         		     cout << "#######################\n";
		         		     if(number > studentid.size() || number <= 0){
		         		     	cout << "Invalid.\n";
		         		     	
							  } else{
							  	Studentsystem::display();
							  }
		         		break;
		         		
		         		case 2:
		         			cout << "Adding a new student marks.\n"
		         			     << "____________________\n";
		         			     Studentsystem::details();
		         			     break;
		         			
		         			case 3:
		         				cout << "Thank you for using the system.\n";
		         				break;
		         				
		         				default: cout << "Invalid.\n";
				 }
	
	}while(option != 3);
	
		 
		
	}
	
};

int main(){
	
	Studentsystem info;
	
	info.checking();
	

}
