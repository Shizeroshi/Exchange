#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <io.h>
#include <Windows.h>
#include <locale>
#include <algorithm>
#include <fcntl.h>
#include <valarray>
#include <conio.h>

using namespace std;

/*
#define escape 27
#define enter 13
#define space 32
#define tab 9
#define BackSlash 92
*/
/*
#define UgolUpLeft (char)218
#define UgolUpRight (char)191
#define UgolDownLeft (char)192
#define UgolDownRight (char)217
#define HorizontalLine (char)196
#define VerticalLine (char)179
#define Kvadrat (char)219
#define space 32
*/

int Exchange(int& a, int& b);

class vars
{
public:
	int first, second, func;
};


int main()
{
	setlocale(LC_ALL, "");
	system("Color 0A");

	vars meow;

	meow.first = 4;
	meow.second = 8;

	cout <<"First variable: " << meow.first << "\t" << "Second variable: " << meow.second;
	cout << endl << endl;
	cout << "~~~~~~~~~~ Применяем магию ~~~~~~~~~~" << endl << endl;
	meow.func = Exchange(meow.first, meow.second);
	meow.func;
	cout << "First variable: " << meow.first << "\t" << "Second variable: " << meow.second;
	cout << endl;
}

int Exchange(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}