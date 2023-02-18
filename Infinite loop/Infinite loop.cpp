#include <iostream>
using namespace std;


int main()
{
	string choice = "Y";

	//same type "string'
	string name, occup, age;
	int part;

	while (choice == "Y") {

		cout << "1: Enter Name\n";
		// Add input name
		cin >> name;

		cout << "2: Enter Age\n";
		// Add input age
		cin >> age;

		cout << "3: Enter Occupation\n";
		// Add input occup
		cin >> occup;


		//The user may not know input -1 to ens the loop
		//Change to Y or N for easier to understand
		while (choice == "Y") {

			// ask if the user want to change any info
			cout << "\nDo you want to change your info? (Y or N)\n";
			cin >> choice;

			//make sure user choose Y or N
			while (choice != "Y" && choice != "N") {
				cout << "\nPlease inter Y or N\n";
				cin >> choice;
			}

			//User want to change info
			if (choice == "Y") {
				//Ask which part they want to change
				//input part
				cout << "\nWhich part you want to change? (Enter 1 for changing name, 2 for changing age, 3 for changing occupation)\n";
				cin >> part;

				// for user change what is wrong
				switch (part)
				{
				case 1:
					cout << "What is your Name: ";
					cin >> name;
					break;
				case 2:
					cout << "What is your Age? ";
					cin >> age;
			
					break;
				case 3:
					cout << "What is your Occupation? ";
					cin >> occup;
					break;
				default:
					// Assume Invalid Menu Choice
					cout << "Sorry that choice is not valid!\n";
					break;
				}
			} 
			
			else if (choice == "N") {
				age += 1;
				cout << "\nThank you for using our application, " << name << " and hope your career in " << occup << " is successful. ";
				cout << "Hope your " << age << " birthday will enjoyable and exciting\n";
			}
		}

	}

	return 0;

}
