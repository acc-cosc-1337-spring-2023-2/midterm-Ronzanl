#include "question3.h"
#include <iostream>

using std::cout; using std::cin;


int main()
{

    int choice = 1;
    double temp;
    double var1;

    do{
        switch(choice)
		    {
			    case 1:
				    cout<<"Please enter a temperature in Celsius: ";
                    while(!(cin >> temp))
                    {
                    cout << "Error: Please enter a number.";
                    cin.clear();
                    cin.ignore(123, '\n');
                    }
                    var1 = get_fahrenheit(temp);
                    cout<<"The temperature in Fahrenheit is: "<<var1<<"\n\n";
				
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