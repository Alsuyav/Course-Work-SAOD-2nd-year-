#include "House.h"

// конструктор по умолчанию
House::House() : number_of_house(-1), count_of_flats(0), top(-1) {};

// конструктор
House::House(int n) : number_of_house(n), count_of_flats(0), top(-1) {};

// передача номера дома
int House::get_num_house() { return number_of_house; }

// передача кол-ва квартир
int House::get_count_flats() { return count_of_flats; }

// передача номера послед. добав. кваритиры
int House::get_top() { return top; }

// вывод данных о доме
string House::show_house()
{
	string message = "Дом № " + to_string(number_of_house) + ":\n";
	if (count_of_flats > 0)
	{
		for (int i = 0; i < count_of_flats; i++)
		{
			message = message + flats[i].show_flat() + "\n";
			cout << endl;
		}
	}
	else
		message = message + "В данном доме нет квартир!\n";
	return message;
}

// добавление квартиры
string House::push(int nom_kvartiry, int ploshad)
{
	string message = "";
	if (top < MAX_FLATS - 1)
	{
		if (!search_flat(nom_kvartiry)) // если нет квартиры с этим номером
		{
			Flat temp_kvartira(nom_kvartiry, ploshad); // врем. переменная для записи
			flats[++top] = temp_kvartira; // запись квартиры
			message = message + temp_kvartira.show_flat()+ " добавлена!\n";
			count_of_flats++;
		}
		else
			message = "Квартира с таким номером уже существует!";
	}
	else
		message = "Нет места для записи новой квартиры!\n";
	return message;
}

// проверка, есть ли квартира с определенным номером
bool House::search_flat(int nom_kvartiry)
{
	if (top >= 0)
	{
		int found = 0; // флаг нахождения
		for (int i = 0; i < MAX_FLATS; i++)
		{
			if (flats[i].get_num_flat() == nom_kvartiry)
			{
				found = 1;
				break;
			}
		}
		if (found)
			return true;
		else
			return false;
	}
	return false;
}

// удаление последней добав. квартиры
string House::pop()
{
	string message = "";
	if (top >= 0)
	{
		flats[top] = Flat();
		top--; // уменьшение индекса посл. квартиры
		message = "Последняя добавленная квартира была удалена!";
		count_of_flats--;
	}
	else
		message = "В этом доме уже нет квартир!\n";
	return message;
}

// поиск квартиры с определ. номером
string House::search_flat_to_show_square(int nom_kvartiry)
{
	string message = "";
	if (top >= 0)
	{
		int found = 0; // флаг нахождения
		for (int i = 0; i < MAX_FLATS; i++)
		{
			if (flats[i].get_num_flat() == nom_kvartiry)
			{
				message = message + flats[i].show_flat() + "\n";
				found = 1;
			}
		}
		if (found)
			return message;
		else
			message = "Таких квартир нет!\n";
		return message;
	}
	else
		message = "В данном доме нет квартир!\n";
	return message;
}

// поиск квартир с определ. площадью
string House::search_square_flats(int ploshad)
{
	string message = "";
	if (top >= 0)
	{
		int found = 0; // флаг нахождения
		for (int i = 0; i < MAX_FLATS; i++)
		{
			if (flats[i].get_sq_flat() == ploshad)
			{
				message = message + flats[i].show_flat() + "\n";
				found = 1;
			}
		}
		if (found)
			return message;
		else
			message = message + "Таких квартир нет!\n";
		return message;
	}
	else
		message = message + "В данном доме нет квартир!\n";
	return message;
}