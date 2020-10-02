// Program to input number of week's day and it will print the day name on the screen
// By Switch Statement
 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int d;                                              //declaring an int type variable as we count days in integer form
    cout<<"Enter the nummber of week's day (1-7): ";    
    cin>>d;                                             //Inputing number of day of the week. 
    switch(d)                                           /*Depending on the value we entered it 
                                                          switch between the case given below.*/
    {
        case 1: cout<<"\nSunday";                       /* If we input 1 then the switch will 
                                                           run this case as this is case 1.*/
                break;
        case 2: cout<<"\nMonday";                       // If we input 2 switch will run this case
                break;
        case 3: cout<<"\nTuesday";
                break;
        case 4: cout<<"\nWednesday";
                break;
        case 5: cout<<"\nThrusday";
                break;
        case 6: cout<<"\nFriday";
                break;
        case 7: cout<<"\nSaturday";
                break;
        default: cout<<"\nWrong number of day!";        // If we input any other number than (1-7) then this will run as we didn't declare any case for other numbers.
                                                        /* This runs whenever the entered value 
                                                           in switch didn't satisfy any of the defined cases.*/
    }
    return 0;
}