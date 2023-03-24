#pragma once
#include "House.h"
#include <string>

struct house_in_list
{
	House house_data;
	house_in_list* next;
};


class Management_сompany
{
private:
	string name; // название управл€ющей компании
	house_in_list* first; // список домов
	int count_of_houses; // счЄтчик кол-ва домов
public:
	// конструктор по умолчанию
	Management_сompany();

	// конструктор
	Management_сompany(string nazv);

	// изменение имени компании
	void change_name(string nazv);

	// передача названи€ компании
	string get_name();
	// передача кол-ва квартир
	int get_count_houses();

	// поиск дома с указанным номером
	int search_house(int search_house);

	// добавить дом в список согласно его номеру
	string push_house(int nom_doma);

	// вывод всех номеров домов
	string show_all_houses();

	// поиск дома с указанным номером
	string search_house_test(int search_house);

	// удаление дома
	string pop_house(int nom_doma);

	// вывод квартир указанного дома
	string show_flat_house(int nom_doma);

	// вывод всех домов с квартирами
	string show_all_flat_house();

	// добавление квартиры в указанный дом
	string push_flat(int nom_doma, int nom_kvar, int ploshad);

	// удаление послед. добав. квартиры из указанного дома
	string pop_flat(int nom_doma);

	// поиск квартир по номеру
	string Management_сompany::search_flats_by_num(int nom_kvar);

	// поиск квартир по площади
	string Management_сompany::search_flats_by_sq(int ploshad);
};
