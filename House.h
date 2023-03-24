#pragma once
#include <iostream>
using namespace std;
#include "Flat.h"

#define MAX_FLATS 10

class House
{
private:
	int number_of_house; // номер дома
	int count_of_flats; // счётчик кол-ва квартир
	int top; // индекс последней добавленной квартиры
	Flat flats[MAX_FLATS]; // массив квартир

public:
	// конструктор по умолчанию
	House();

	// конструктор
	House(int n);

	// передача номера дома
	int get_num_house();

	// передача кол-ва квартир
	int get_count_flats();

	// передача номера послед. добав. кваритиры
	int get_top();

	// вывод данных о доме
	string show_house();

	// добавление квартиры
	string push(int nom_kvartiry, int ploshad);

	// удаление последней добав. квартиры
	string pop();

	// проверка, есть ли квартира с определенным номером
	bool search_flat(int nom_kvartiry);

	// поиск квартиры с определ. номером
	string search_flat_to_show_square(int nom_kvartiry);

	// поиск квартир с определ. площадью и их вывод
	string search_square_flats(int ploshad);
};