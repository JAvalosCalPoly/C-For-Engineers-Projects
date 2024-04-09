#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int Lcnt = 0;
	int Mcnt = 0;
	int choice;
	
	cout << "how many Passangers? passengers: ";
	int pass;
	cin >> pass;
	
	for ( int i=0 ; i<pass ; i++)
	{
		cout << "what is you destination? type \"1\" for Miami, type\"2\" for Los Angeles.   choice: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "\nChoose your class.  class: ";
			cin >> choice;
			switch (choice)
			{
				case 1:
				case 2:
					cout << "Sorry, No high class seats are available...\n\n";
					break;
					
				case 3:
					cout << "Miami, Class 3\n";
					Mcnt++;
					break;
					
				case 4:
					cout << "Miami, Class 4\n";
					Mcnt++;
					break;
					
				case 5:
					cout << "Miami, Class 5\n";
					Mcnt++;
					break;
				
				default:
					cout << "No lower seats available\n";
				    break;
			}
		}
		else
			{
				cout << "Choose your class.  class: ";
			cin >> choice;
			switch (choice)
			{
				case 1:
				case 2:
					cout << "Sorry, No high class seats are available...\n\n";
					break;
					
				case 3:
					cout << "Los Angeles, Class 3\n";
					Lcnt++;
					break;
					
				case 4:
					cout << "Los Angeles, Class 4\n";
					Lcnt++;
					break;
					
				case 5:
					cout << "Los Angeles, Class 5\n";
					Lcnt++;
					break;
				
				default:
					cout << "No lower seats available\n";
				    break;
			}
			}
			
		
	}
	
    cout << "\nsummary\n" << "Flight 1 Passangers: " << Mcnt << "  |   Flight 2 Passangers: " << Lcnt;

	return 0;
}