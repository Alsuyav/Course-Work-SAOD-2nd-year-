#include "Flat.h"

// конструктор по умолчанию
Flat::Flat() : number_of_flat(-1), square(-1) {};

// конструктор
Flat::Flat(int n, int s) : number_of_flat(n), square(s) {};

// передача номера кваритиры
int Flat::get_num_flat() { return number_of_flat; }

// передача площади кваритиры
int Flat::get_sq_flat() { return square; }

// вывод данных о квартире
string Flat::show_flat()
{
	return "Квартира № " + to_string(number_of_flat) + " (" + to_string(square) + " кв. м)";
}
