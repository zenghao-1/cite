#include <iostream>
using namespace std;

void addOne1(int a);//������

void addOne2(int& a);//����

int main()
{
	int a(1);
	cout << a << endl<<endl;
	addOne1(a);
	cout << "addOne1 late:"<< a << endl;
	cout << endl ;
	addOne2(a);
	cout << "addOne2 late:" << a << endl;




}

void addOne1(int a)
{
	a++;
	cout << a << endl;
}

void addOne2(int& a)
{
	a++;
		cout << a << endl;
}