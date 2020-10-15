#include <iostream>

using namespace std;
/*
Program to multiply (3,3) matrix and print the result in matrix form
*/ 

void multiply(int x[3][3], int y[3][3])
{
    int sum = 0;
    static int list[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += x[i][k] * y[k][j];
            }
            cout <<sum<< ",";
            list[i][j] = sum;
        }
        cout<<endl;
    }
}

int main(){
    int x[3][3] = { {1, 2, 3}, 
                    {3,-2, 1}, 
                    {4, 2, 1}};
    int y[3][3] = { {1, 2, 3},
                    {3,-2, 1},
                    {4, 2, 1}};
    multiply(x, y);
    
    return 0;
}
