#include<iostream>
#include<Windows.h>
#include"Book.h"

using namespace std;

//template <typename t> int getArrSize(t arr[])
//{
//	return sizeof(arr) / sizeof(arr[0]);
//}

void showBooksByAutor(const char* autor, Book* catalog)
{
	for (size_t i = 0; i < 5; i++)
	{
		if (!_stricmp(catalog[i].getAutor(), autor))
		{
			catalog[i].show();
		}
	}
}

int main()
{
	SetConsoleOutputCP(1251);

	Book catalog[5]{
		{"������","������� ������","���� � ������",2000,10},
		{"������","� ������ ����� ���","������",2010,15},
		{"������","������ � ������� �����","����",1000,100},
		{"��������","������ � ���������","������",1999,30},
		{"�������","����� � ���","����",1785,1400},
	};

	showBooksByAutor("�������", catalog);


	return 0;
}