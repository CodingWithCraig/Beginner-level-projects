#include <iostream>
#include <vector>
#include <string>
//#include <fstream>




using namespace std;

void options(){
	
	cout << "Choose an option from the ones provided below.\n";
	cout << "_____________________________________________\n\n";
	
	cout << "NB - If you haven't added any task start by option 1\n";
	cout << "NB-IF YOU ARE DONE WITH A TASK AND YOU FEEL LIKE REMOVING THE TASK FROM YOUR LIST YOU CAN USE OPTION 3 TO DO THAT.\n ";
	cout << "_____________________________________________\n\n";
	
	cout << "1. Add tasks.\n";
	cout << "2. View tasks.\n";
	cout << "3. Delete tasks.\n";
	cout << "4. Exit\n";
};

class todolist{

	vector<std::string> tasks;
	string task;
	int taskno;
	int option;
	int option2;
	int i;
//	int no = 0;
	
//	no = (no + 1);

	
	public:
		
		void addtask(){
		do{
			cout << "____________________________\n";
			cout << "NOTE - BEFORE INPUTING ANYTHING PLEASE NOTE THAT THE PROGRAM CAN ONLY STORE (1-10) TASKS\n\n";
			cout << "____________________________\n";
			
			
			
			tasks.clear();
			
			cout << "Input tasks below.\n";
			cout << "____________________________\n\n";
			
			cout << "* - PLEASE MAKE SURE YOU INPUT 10 TASKS\n";
			cout << "* - IF YOUR TASKS ARE LESS JUST WRITE THE WORD 'nxn' IN THE LEFT SPOTS\n\n ";
			
			cout << "Note that if you have added tasks before choosing this option again erased those tasks\n";
			cout << " ...so you have to write them down again\n";
			
			cout << "____________________________\n";
			cin.clear();
			
			cout << "Write your task below.\n"; //nullStream(0);

            for(i = 0;i < 11 ; i++){
            	
            	cout << "----\n";
            	cout << i <<  ". ";
//            	cin.ignore();
//                cout << no << ". ";
                getline(cin,task);
//                cout << task << "\n";
			    tasks.push_back(task);
			}
			

			
			
			cout << "Task added successfully.\n\n";
			cout << "_______________________\n";
			cout << "NB - If you choose 1 you will have to start over with inputing the tasks again.\n\n";
			cout << "_______________________\n\n";
			cout << "1. Repeat\n";
			cout << "2. Done\n";
			cin >> option;
			
			std::cin.clear();
			fflush(stdin);
		
			switch(option){
				case 1: addtask();
				break;
					
				case 2: cout << "Hope you are satisfied\n";
				break;
					
				default: 
				cout << "Invalid option\n";
				break;
			}
		}while(option != 2);	
		};
		
	    void viewtask(){
		do{
			    cout << "2. Viewing Tasks.\n";
			    cout << "_______________________\n";
			
				cout << "Choose below\n";
				cout << "____________________________\n\n";
				cout << "1. Check a task\n";
//				cout << "2. View all\n";
				cout << "2. Done\n";
				cin >> option2;
				
				std::cin.clear();
			    fflush(stdin);
				
				switch(option2){
					case 1: 
					cout << "____________________________\n\n";
					cout << "Write the number of the task you want to view below from (1-10)\n";
			        cout << "_______________________\n";
			        cin >> taskno;
			        if (taskno > tasks.size() || taskno == 0 ){
				    cout << "Invalid\n";
			          }else{
				           cout << tasks[taskno] << "\n";
				       }
					break;
					
				/*	case 2:
						cout << "____________________________\n\n";
				
					
					cout << "-. " << tasks[0] << "\n";
					cout << "-. " << tasks[1] << "\n";
					cout << "-. " << tasks[2] << "\n";
					cout << "-. " << tasks[3] << "\n";
					cout << "-. " << tasks[4] << "\n";
					cout << "-. " << tasks[5] << "\n";
					cout << "-. " << tasks[6] << "\n";
					cout << "-. " << tasks[7] << "\n";
					cout << "-. " << tasks[8] << "\n";
				    cout << "-. " << tasks[9] << "\n";
				    cout << "-. " << tasks[10] << "\n";
				
					break;
						*/
					case 2: cout << "Hope you are satisfied.\n";
					break;
						
					default:
						cout << "Invalid\n";
						break;
				}
			}while(option2 != 2);
		};
	
		void deletetask(){
			
			do{
			cout << "2. Delete tasks.\n";
			cout << "____________________________\n";
			cout << "Write the number of the task you want to delete below from (1-10)\n\n";
			cin >> taskno;
			if (taskno > tasks.size() || taskno == 0 ){
				cout << "____________________________\n";
				cout << "Invalid\n";
			}else{
				cout << "____________________________\n";
				cout << "____________________________\n";
//				cout << "There are " << tasks.size() << " tasks stored." << "\n";
				cout << tasks[taskno - 1] << "\n";
				tasks.erase(tasks.begin() + taskno);
				
				
				tasks.push_back(tasks[taskno - 1]);//  I NEED TO FIX THIS LINE (now it is fixed)
				
				
//				cout << "There are " << tasks.size() << " tasks left." << "\n";
                cout << "____________________________\n";
				cout << "Choose below\n";
				cout << "1. Delete another\n";
				cout << "2. Done\n";
				cout << "____________________________\n";
				cin >> option2;
				
				std::cin.clear();
			    fflush(stdin);
				
				switch(option2){
					case 1:
						cout << "____________________________\n";
					 deletetask();
					break;
						
					case 2: 
					cout << "Hope you are satisfied.\n";
					break;
						
					default:
						cout << "Invalid\n";
						break;
				}
			}
		}while(option2 != 2);	
		
			}
			
};



int main(){
	
	int chosen;
	todolist mylist;
	
	
do{
	options();
	cout << "Input your option below.\n";
	cin >> chosen;
	
	switch(chosen){
		case 1: mylist.addtask();
			break;
		case 2: mylist.viewtask();
			break;
		case 3: mylist.deletetask();
			break;
		case 4: 
		cout << "Thanks for using our program.\n";
		break;
		default:
			cout << "Invalid\n";
			break;
	}
	
}while(chosen != 4);

	
	
	
	
return 0;
}
