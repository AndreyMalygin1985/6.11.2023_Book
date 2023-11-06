#pragma once
#include<iostream>

using namespace std;

class Book
{
	char* autor;
	char* title;
	char* publishing;
	unsigned int year;
	unsigned int page_count;
public:
	Book(const char* autor, const char* title, const char* publishing, unsigned int year, unsigned int page_count) :
		autor{ autor ? new char[strlen(autor) + 1] : nullptr },
		title{ title ? new char[strlen(title) + 1] : nullptr },
		publishing{ publishing ? new char[strlen(publishing) + 1] : nullptr },
		year{ year },
		page_count{ page_count }
	{
		if (autor) {
			strcpy_s(this->autor, strlen(autor) + 1, autor);
		}
		if (title) {
			strcpy_s(this->title, strlen(title) + 1, title);
		}
		if (publishing) {
			strcpy_s(this->publishing, strlen(publishing) + 1, publishing);
		}
	}
	explicit Book(const char* title) : Book(nullptr, title, nullptr, 0, 0) {}

	void show() const
	{
		cout << title << " ( " << autor << " ) [ " << publishing 
		<< " - " << year << "г. ]" << " -- " << page_count << "стр." << endl;
	}
	char* getAutor() const
	{
		return autor;
	}
	char* getPublishing() const
	{
		return publishing;
	}
	unsigned int getYear() const
	{
		return year;
	}

};

