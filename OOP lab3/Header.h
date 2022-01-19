#pragma once
using namespace std;

struct RealtorApartment {
	char* Owner;
	char RealtorCompany[25];
	int footage;
	double price;
	RealtorApartment** ptrPen;
};

RealtorApartment init(char*, char*, int, double); //������������



struct RealtorApartment* createArray(int n);
void inputArray(struct RealtorApartment** RealtorApartment, int n);
void outputArray(struct RealtorApartment** RealtorApartment, int n);
void sortArray(struct RealtorApartment** RealtorApartment, int n);




void output(RealtorApartment b); //������� ������
void input(RealtorApartment& a); //���� ������ � ��������� �������������
bool equal(RealtorApartment& a, RealtorApartment& b);// ������� equal
int compare(RealtorApartment& a, RealtorApartment& b);//������� compare (0 a==b,1 a>b,-1 a<b)
void copyApart(RealtorApartment& a, RealtorApartment& b);//����������� ������ �� ������ �� ������ ���������