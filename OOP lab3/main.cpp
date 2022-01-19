#include <iostream>
#include "Header.h"
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    RealtorApartment test{ (char*)"Makarov Ilya","Best Apart",45,5000000 };
    RealtorApartment t3{ (char*)"kirill Siryakov","TheFloor",68,6500000 };
    output(t3);
    RealtorApartment* t4 = new RealtorApartment;
    input(*(t4));
    output(*(t4));
   /* outputArray(t3, 2);*/

    system("pause");
}


