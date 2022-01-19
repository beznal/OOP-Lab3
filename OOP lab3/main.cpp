#include <iostream>
#include "Header.h"
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    RealtorApartment test{ (char*)"ErichKrause R-301 Original Gel 0.5","ErichKrause",1,112 };
    RealtorApartment t3{ (char*)"Krause R-310  Gel 0.8","Krause",1,328 };
    output(t3);
    RealtorApartment* t4 = new RealtorApartment;
    input(*(t4));
    output(*(t4));
   /* outputArray(t3, 2);*/

    system("pause");
}


