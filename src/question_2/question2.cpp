#include "question2.h"


bool is_prime(int num)
{
    if (num < 2) 
    {
        return false;
    }
    
    for (int val = 2; val <= num / 2; val++) 
    {
        if (num % val == 0) 
        {
            return false;
        }
    }
    return true;
}

vector <int> get_primes(int num)
{
    vector<int> primes;
        for (int val = 2; val <= num; val++) 
        {
            if (is_prime(val)) 
            {
                primes.push_back(val);
            }
        }
    return primes;
}