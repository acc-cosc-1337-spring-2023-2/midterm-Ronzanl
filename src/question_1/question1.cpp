#include "question1.h"
#include<iostream>

using std::cout;

int get_earned_points(int sold)
{
    switch(sold){

    case 1 ... 5:
        return sold * 1;
    case 6 ... 10:
        return sold * 5;
    case 11 ... 15:
        return sold * 10;
    case 16 ... 999999999:
        return sold * 15;

    default:
        cout<<"Please enter a valid Number.\n";
        return 1;
    }
}