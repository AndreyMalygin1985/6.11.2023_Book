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
		{"Пушкин","Евгений Онегин","Рога и Копыта",2000,10},
		{"Хаскли","О дивный новый мир","Литрес",2010,15},
		{"Пушкин","Сказка о золотой рыбке","Рога",1000,100},
		{"Булгаков","Мастер и Маргарита","Копыта",1999,30},
		{"Толстой","Война и мир","Чудо",1785,1400},
	};

	showBooksByAutor("Толстой", catalog);


	return 0;
}