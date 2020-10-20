/*==============================|-problem statement-|==============================*/
/*
    Read N numbers from the user and find the largest even number.
*/

/*===================================|-solution-|===================================*/

#include <iostream>

using namespace std;

int main(){
    int n, num, max;/*max will store the maxium even number*/

    /*n is the number of elements we are going to input*/
    cin>>n;

    /*we are inputting the first number and initalizing it to max */
    cin>>max;

    /*since we already inputted first number we run the loop for inputting numbers n - 1 times*/
    while(--n){
        cin>>num;

        /*checking if the inputted number is even and greater than maximum*/
        if(num>max && num%2 == 0)

            //updating the max 
             max = num;
    }

    //displaying the maximum number
    cout<<max;
    return 0;
}