#include "question1.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    
    int widgets = 0;
    int choice = 1;

    do{
        switch(choice)
		    {
			    case 1:
				    cout<<"Please enter how many widgets sold: ";
                    
                    while(!(cin >> widgets && widgets >= 1))
                    {
                    cout << "Error - Please enter a valid number: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    }
                    int temp = get_earned_points(widgets);
                    cout<<"Points Earned: "<<temp<<"\n\n";
				
				    char confirm;
				    cout<<"Would you like to exit? (Y/N): ";
				    cin>>confirm;
                    if (confirm == 'y' || confirm == 'Y')
                    {
                        cout<< "Exiting Program. Goodbye."<<"\n\n";
                        choice++;
                    }
                    else if(confirm == 'n' || confirm == 'N')
                    {
                        cout<<"Resetting..."<<"\n";
                    }
                    else
                    {
                        cout<<"Invalid Selection. Please enter Y or N."<<"\n";
                    }
                    
            }
            
            } while(choice != 2);
    
    return 0;
}