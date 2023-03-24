#pragma once
#include <iostream>
#include <string>
using namespace std;
class Flat
{
private:
	int number_of_flat; // номер квартиры
	int square; // площадь квартиры
public:

	// конструктор по умолчанию
	Flat();
	// конструктор
	Flat(int n, int s);

	// передача номера кваритиры
	int get_num_flat();
	// передача площади кваритиры
	int get_sq_flat();

	// вывод данных о квартире
	string show_flat();
};