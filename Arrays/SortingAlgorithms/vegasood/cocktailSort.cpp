#include<iostream>
using namespace std;

void numSwap(int &x, int &y){
    int temp = 0;
    
    temp = x;
    x = y;
    y = temp;

}

void printOutput (int arr[], int len){
    int i;
    cout<<"Sorted array via Cocktail Sort - \n";
	for(i=0; i<len; i++)
	{
			cout<< arr[i] <<" ";
	}
    cout << "\n";

}


int main()
{
	int len,i,j;
    int arrIn[100];
    int ctr = 0;
    int didItSwap = 1;

	cout<<"Enter array (max 100) - \n";
    while (cin.peek() != '\n') {
        cin >> arrIn[ctr++];
    }
	
    len = ctr;

	while (didItSwap)
	{
        didItSwap = 0;
        //even iterators will run the bubble sort swap from left to right
        if (i%2 == 0){
            
            for (j=0; j<len-1 ; j++){
                if (arrIn[j] > arrIn [j+1]){
                    numSwap(arrIn[j], arrIn[j+1]);
                    didItSwap = 1;
                }
            }


        } else if (i%2 != 0){
        
            for (j=len-2; j>=0; j--){
                if (arrIn[j] > arrIn [j + 1]){
                    numSwap(arrIn[j], arrIn[j + 1]);
                    didItSwap = 1;
                }
            }

        
        } else{
            cout << "Something went wrong, please try again...";
        }
			
	}

    printOutput(arrIn, len);
    
}


