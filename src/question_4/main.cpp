#include "question4.h"
#include <iostream>

using std::cout; using std::cin;


int main()
{
    int choice = 1;
    double kilo;
    double meters;
    double var1;

    do{
        switch(choice)
		    {
			    case 1:
				    cout<<"Please enter weight in Kilograms: ";
                    while(!(cin >> kilo && kilo >= 1))
                    {
                    cout << "Error: Please enter a valid weight in Kilograms. ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    }
                    cout<<"Please enter velocity in meters per second (m/s): ";
                    while(!(cin >> meters && meters >= 1))
                    {
                    cout << "Error: Please enter a valid speed in meters per second (m/s). ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    }

                    var1 = get_kinetic_energy(kilo,meters);
                    cout<<"The Kenetic Energy is: KE =  "<<var1<<"\n\n";
				
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