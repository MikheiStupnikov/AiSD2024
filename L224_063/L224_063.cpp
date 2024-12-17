#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    const int rows=5;
    const int columns=5;
    srand(time(NULL));
    int arr[rows][columns];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            arr[i][j]=rand()%3;
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n';
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < columns; j++) {
            arr[i][j] = 0;
            for (int k = 1; k < rows; k++) {
                arr[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
}