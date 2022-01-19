#include "Header.h"
#include <iostream>
#include<Windows.h>


using namespace std;



RealtorApartment init(char* a, char* b, int c, double d) //инциализация
{
	RealtorApartment ra;
	ra.Owner = a;  strcpy_s(ra.RealtorCompany, 25, b); ra.footage = c; ra.price = d;
	return RealtorApartment(ra);
}


int inputName(char*& S) //функция буфера
{
	char buff[256];
	cin.getline(buff, 254, '\n');
	S = new char[strlen(buff) + 1];
	strcpy_s(S, strlen(buff) + 1, buff);
	return !cin.eof();
}

int input2(char* a)//вспомогательная функция
{
	cin.getline(a, 23, '\n');
	return !cin.eof();
}

void output(RealtorApartment b)//функция вывода
{
	cout << endl;
	cout << "Owner: " << b.Owner << endl;
	cout << "Realtor Company: " << b.RealtorCompany << endl;
	cout << "footage: " << b.footage << endl;
	cout << "Price: " << b.price << endl << endl;

}

void input(RealtorApartment& a)//ввод данных в структуру пользователем 
{
	cout << endl;
	cout << "Owner: ";
	inputName(a.Owner);
	cout << "Realtor Apartment: ";
	input2(a.RealtorCompany);
	cout << "footage: ";
	cin >> a.footage;
	cout << "Price: ";
	cin >> a.price;
	cout << endl;
}

bool equal(RealtorApartment& a, RealtorApartment& b) //функция equal
{
	if (!strcmp(a.Owner, b.Owner) && !strcmp(a.RealtorCompany, b.RealtorCompany) && (a.footage == b.footage) && (a.price == b.price))
	{
		cout << endl << "Это одинаковые квартиры" << endl; return true;
	}
	else
	{
		cout << endl << "Это разные квартиры" << endl; return false;
	}
}

int compare(RealtorApartment& a, RealtorApartment& b) //функция compare (0 a==b,1 a>b,-1 a<b)
{
	int count = 0;
	count = strcmp(a.Owner, b.Owner);
	if (count == 0) {
		if (a.footage > b.footage) {
			cout << 1 << endl; return 1;
		}
		if (a.footage < b.footage) { cout << -1 << endl; return -1; }
		if (a.footage == b.footage)
		{
			if (a.price > b.price) { cout << 1 << endl; return 1; }
			if (a.price < b.price) { cout << -1 << endl; return -1; }
			if (a.price == b.price) { cout << 0 << endl; return 0; }
		}

	}
	else
	{
		cout << count << endl; return count;
	}
}

void copyApart(RealtorApartment& a, RealtorApartment& b) //копирование данных из первой во вторую структуру
{
	b.Owner = a.Owner;
	strcpy_s(b.RealtorCompany, 25, a.RealtorCompany);
	b.footage = a.footage;
	b.price = a.price;

}





struct RealtorApartment* createArray(int n) {
	RealtorApartment** p;
	p = new RealtorApartment * [n];
	return *p;
}


void inputArray(RealtorApartment** pen, int n) {
	for (int i = 0; i < n; i++) {
		pen[i] = new RealtorApartment();
		input(*(pen)[i]);
		cout << "=================================" << endl;
	}
}


void outputArray(struct RealtorApartment** pen, int n) {

	for (int i = 0; i < n; i++) {
		output(*(pen)[i]);
		cout << "=================================" << endl;
	}

}

// сортировка пузырьком по возрастанию цены квартиры
void sortArray(struct RealtorApartment** pen, int n) {
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - 1 - i; k++) {
			if (pen[k]->price > pen[k + 1]->price) {
				struct RealtorApartment* apart = pen[k + 1];
				pen[k + 1] = pen[k];
				pen[k] = apart;
			}
		}
	}
}