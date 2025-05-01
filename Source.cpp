#include <iostream>
#include <locale>
#include <array>
#include <Windows.h> // не работает setConsole
using namespace::std;

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	 
	string array[10];
	// Заполняем массив "звездами" и выводим в консоль
	for (int i = 0; i < 10; i++)
	{
		array[i] = "*";	
		for (int j = 0; j < 10; j++)
		{
			cout << array[j];
		}
		array[i] = "       ";
			
		Sleep(600);
		system("cls");
	}
}