/*
Amerike University
Author: Ali Angel
Work #: 16
Date: 21/03/25
Description: This program will declare a 3 by 3 matrix and will then ask the user to 
fill it, the program will  then add all the numbers in the matrix and show the results.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();

int main(){
    float matrixNums[3][3]; 
    float sum = 0; 
    cout << "The following program will ask you to fill in a 3 by 3 matrix\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Write the number in position ["<< i <<"][" << j <<"]: ";
            cin >> matrixNums[i][j];
        }
    }
    pressAnyKey();
    cout << "We will now show our matrix and give you the sum of all its numbers\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "number in position ["<< i <<"][" << j <<"]: " << matrixNums[i][j] << "\n";
            sum = sum + matrixNums[i][j];
        }
    }
    pressAnyKey();
    cout << "The sum of all the numbers in our matrix is: " << sum;

    return 0;
}

void pressAnyKey()
{
    cout << "\nPRESS ANY KEY TO CONTINUE\n";
    getch();
    system("cls");
}
