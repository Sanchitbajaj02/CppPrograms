#include <iostream>

#include <vector>

#include <math.h>

#define bar cout<<"--------------------------------\n"

using namespace std;

//Square Matrix

class Matrix{

    public:

    vector <int> matrix;

    int size=0;

    Matrix(const vector <int> values){

        matrix=values;

        size=sqrt(matrix.size());

    }

    void printMatrix(){

        for(int i=0;i<size*size;i++){

            if(matrix[i]>=10){cout<<matrix[i]<<"   ";}else{cout<<0<<matrix[i]<<"   ";}

            if((i+1)%size==0) cout<<endl;

        }

    }    

    void rotateMatrix(){

        vector <int> copy = matrix;

        for(int row=0;row<size;row++){

            for(int col=0;col<size;col++){

                matrix[col*size+(size-1-row)]=copy.at(row*size+col);

            }

        }

    }

};

int main() {  

    bar;

    cout<<"ROTATING A SQUARE MATRIX\n";

    bar;

    cout<<"here is a matrix:\n";

    bar;

    int values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};

    vector <int> valuesVec(values,values+sizeof(values)/sizeof(int));  

    Matrix m(valuesVec);

    m.printMatrix();

    bar;

    cout<<"rotated 90 degrees\n";

    bar;

    m.rotateMatrix();

    m.printMatrix();

    bar;

    cout<<"rotated 180 degrees\n";

    bar;

    m.rotateMatrix();

    m.printMatrix();

    bar;

    cout<<"rotated 270 degrees\n";

    bar;

    m.rotateMatrix();

    m.printMatrix();

    bar;

    cout<<"rotated 360 degrees\n";

    bar;

    m.rotateMatrix();

    m.printMatrix();

    return 0;

}
