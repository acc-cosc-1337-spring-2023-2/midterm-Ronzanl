#include "question2.h"
#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::vector;


int main()
{
    int choice = 1;
    double prime;
    vector <int> prime_list;

    do{
        switch(choice)
		    {
			    case 1:
				    cout<<"Please enter a number between 1 and 60: ";
                    while(!(cin >> prime && prime >= 1 && prime <=60))
                    {
                    cout << "Error: Please enter a valid number between 1 and 60. ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    }
                    
                    prime_list = get_primes(prime);
                    for (auto val : prime_list)
                    {
                        cout<<val<<" ";
                    }

                    cout<<"<--- This is the prime number list for the value "<<prime<<"\n\n";
				
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