#include <stdio.h>
#include <cstring>
#include <iostream>
#include "findmatch.h"
using namespace std;

int main()
{
    char stroka1[100];
    char stroka2[100];
    cout<<"Vvedite stroku: "<<std::endl;
    gets(stroka1);
    gets(stroka2);

    cout<<findmatch(stroka1, stroka2);
}