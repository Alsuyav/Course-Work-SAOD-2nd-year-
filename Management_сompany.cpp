#include "Management_сompany.h"

// конструктор по умолчанию
Management_сompany::Management_сompany() : name("Пусто"), count_of_houses(0)
{
	// добавление фиктивного элемента-заголовка
	house_in_list* pHead = new house_in_list; // создание места для нового элемента
	pHead->next = NULL; // пока список пуст
	first = pHead;
};

// конструктор
Management_сompany::Management_сompany(string nazv) : name(nazv), count_of_houses(0)
{
	// добавление фиктивного элемента-заголовка
	house_in_list* pHead = new house_in_list; // создание места для нового элемента
	pHead->next = NULL; // пока список пуст
	first = pHead;
};

// изменение имени компании
void Management_сompany::change_name(string nazv) { name = nazv; }

// передача названия компании
string Management_сompany::get_name() { return name; }

// передача кол-ва квартир
int Management_сompany::get_count_houses() { return count_of_houses; }

// поиск дома с указанным номером
int Management_сompany::search_house(int search_house)
{
	int found = 0;
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == search_house)
			{
				found = 1;
				return found;
			}
			else
				ptr = ptr->next;
		}
		return found;
	}
	else
		return found;
}

// добавить дом в список согласно его номеру
string Management_сompany::push_house(int nom_doma)
{
	string message;
	if (!search_house(nom_doma))
	{
		house_in_list* after_this = first;
		house_in_list* before_this = first->next;
		while (before_this)
		{
			if (before_this && (nom_doma < (before_this->house_data).get_num_house()))
			{
				break;
			}
			before_this = before_this->next; // переход к след.
			after_this = after_this->next; // переход к след.
		}
		house_in_list* ptr = new house_in_list; // создание места для нового элемента
		ptr->house_data = House (nom_doma);
		ptr->next = before_this;
		after_this->next = ptr;
		message = "Дом № " + to_string(nom_doma) + " добавлен!\n";
		count_of_houses++;
	}
	else
		message = "Невозможно добавить! Дом с таким номером уже существует!\n";
	return message;
}

// вывод всех номеров домов
string Management_сompany::show_all_houses()
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		cout << "\nHouses:\n";
		while (ptr)
		{
			message = message + "Дом № " + to_string((ptr->house_data).get_num_house()) + "\n"; // вывод данных
			ptr = ptr->next; // переход к следующему
		}
	}
	else
		message = "Нет записанных домов!";
	return message;
}

// поиск дома с указанным номером
string Management_сompany::search_house_test(int search_house)
{
	string message = "";
	int found = 0;
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == search_house)
			{
				message = message + "Дом найден!";
				return message;
			}
			ptr = ptr->next;
		}
		message = message + "Дом не найден!";
	}
	else
		message = message + "Дом не найден! Список домов пуст!";
	return message;
}

// удаление дома
string Management_сompany::pop_house(int nom_doma)
{
	string message = "";
	if (count_of_houses > 0)
	{
		if (search_house(nom_doma))
		{
			house_in_list* before_del = first; // новый указатель на первый элемент
			house_in_list* ptr = first->next; // новый указатель на первый элемент
			while (ptr)
			{
				if ((ptr) && (ptr->house_data).get_num_house() == nom_doma)
				{
					break;
				}
				ptr = ptr->next;
				before_del = before_del->next;
			}

			before_del->next = ptr->next;
			message = message + to_string(nom_doma) + "  дом удалён!\n";
			count_of_houses--;
		}
		else
			message = message + "Дома с таким номером нет!";
	}
	else
		message = message + "Нет домов для удаления!";
	return message;
}

// вывод квартир указанного дома
string Management_сompany::show_flat_house(int nom_doma)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == nom_doma)
			{
				break;
			}
			ptr = ptr->next;
		}
		message = (ptr->house_data).show_house();
	}
	else
		message = message + "Дома с таким номером нет!";
	return message;
}

// вывод всех домов с квартирами
string Management_сompany::show_all_flat_house()
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			message = message + Management_сompany::show_flat_house((ptr->house_data).get_num_house());
			ptr = ptr->next;
		}
	}
	else
		message = "Пока нет домов!";
	return message;
}

// добавление квартиры в указанный дом
string Management_сompany::push_flat(int nom_doma, int nom_kvar, int ploshad)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == nom_doma)
			{
				break;
			}
			ptr = ptr->next;
		}
		message = message + (ptr->house_data).push(nom_kvar, ploshad);
	}
	else
		message = message + "Дома с таким номером нет!";
	return message;
}

// удаление послед. добав. квартиры из указанного дома
string Management_сompany::pop_flat(int nom_doma)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == nom_doma)
			{
				break;
			}
			ptr = ptr->next;
		}
		message = message + (ptr->house_data).pop();
	}
	else
		message = message + "Дома с таким номером нет!";
	return message;
}

// поиск квартир по номеру
string Management_сompany::search_flats_by_num(int nom_kvar)
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			message = message + " В доме № " + to_string((ptr->house_data).get_num_house()) + " --- " + (ptr->house_data).search_flat_to_show_square(nom_kvar);
			ptr = ptr->next;
		}
	}
	else
		message = "Пока нет домов!";
	return message;
}

// поиск квартир по площади
string Management_сompany::search_flats_by_sq(int ploshad)
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // новый указатель на первый элемент
		while (ptr)
		{
			message = message + " В доме № " + to_string((ptr->house_data).get_num_house()) + " --- " + (ptr->house_data).search_square_flats(ploshad);
			ptr = ptr->next;
		}
	}
	else
		message = "Пока нет домов!";
	return message;
}
