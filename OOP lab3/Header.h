#pragma once
using namespace std;

struct RealtorApartment {
	char* Owner;
	char RealtorCompany[25];
	int footage;
	double price;
	RealtorApartment** ptrPen;
};

RealtorApartment init(char*, char*, int, double); //инциализация



struct RealtorApartment* createArray(int n);
void inputArray(struct RealtorApartment** RealtorApartment, int n);
void outputArray(struct RealtorApartment** RealtorApartment, int n);
void sortArray(struct RealtorApartment** RealtorApartment, int n);




void output(RealtorApartment b); //функция вывода
void input(RealtorApartment& a); //ввод данных в структуру пользователем
bool equal(RealtorApartment& a, RealtorApartment& b);// функция equal
int compare(RealtorApartment& a, RealtorApartment& b);//функция compare (0 a==b,1 a>b,-1 a<b)
void copyApart(RealtorApartment& a, RealtorApartment& b);//копирование данных из первой во вторую структуру