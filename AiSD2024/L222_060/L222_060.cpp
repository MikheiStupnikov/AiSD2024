#include <iostream>
#include <stdio.h>
#include <time.h>
#include "myfunc.h"
//Антон Селюков L222_060 - функция myfunc, которая делает сортировку вставками.
using namespace std;


int main()
{
    int N=10;
    int arr[N];
    srand(time(NULL));
    for (int i=0; i<N; i++)
    {
        arr[i]=rand()%100;
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    myfunc(arr, N);
    for (int i=0; i<N; i++)
    {
        cout<<arr[i]<<' ';
    }
 
}