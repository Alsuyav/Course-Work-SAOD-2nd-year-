#include "Management_�ompany.h"

// ����������� �� ���������
Management_�ompany::Management_�ompany() : name("�����"), count_of_houses(0)
{
	// ���������� ���������� ��������-���������
	house_in_list* pHead = new house_in_list; // �������� ����� ��� ������ ��������
	pHead->next = NULL; // ���� ������ ����
	first = pHead;
};

// �����������
Management_�ompany::Management_�ompany(string nazv) : name(nazv), count_of_houses(0)
{
	// ���������� ���������� ��������-���������
	house_in_list* pHead = new house_in_list; // �������� ����� ��� ������ ��������
	pHead->next = NULL; // ���� ������ ����
	first = pHead;
};

// ��������� ����� ��������
void Management_�ompany::change_name(string nazv) { name = nazv; }

// �������� �������� ��������
string Management_�ompany::get_name() { return name; }

// �������� ���-�� �������
int Management_�ompany::get_count_houses() { return count_of_houses; }

// ����� ���� � ��������� �������
int Management_�ompany::search_house(int search_house)
{
	int found = 0;
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
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

// �������� ��� � ������ �������� ��� ������
string Management_�ompany::push_house(int nom_doma)
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
			before_this = before_this->next; // ������� � ����.
			after_this = after_this->next; // ������� � ����.
		}
		house_in_list* ptr = new house_in_list; // �������� ����� ��� ������ ��������
		ptr->house_data = House (nom_doma);
		ptr->next = before_this;
		after_this->next = ptr;
		message = "��� � " + to_string(nom_doma) + " ��������!\n";
		count_of_houses++;
	}
	else
		message = "���������� ��������! ��� � ����� ������� ��� ����������!\n";
	return message;
}

// ����� ���� ������� �����
string Management_�ompany::show_all_houses()
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
		cout << "\nHouses:\n";
		while (ptr)
		{
			message = message + "��� � " + to_string((ptr->house_data).get_num_house()) + "\n"; // ����� ������
			ptr = ptr->next; // ������� � ����������
		}
	}
	else
		message = "��� ���������� �����!";
	return message;
}

// ����� ���� � ��������� �������
string Management_�ompany::search_house_test(int search_house)
{
	string message = "";
	int found = 0;
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
		while (ptr)
		{
			if ((ptr) && (ptr->house_data).get_num_house() == search_house)
			{
				message = message + "��� ������!";
				return message;
			}
			ptr = ptr->next;
		}
		message = message + "��� �� ������!";
	}
	else
		message = message + "��� �� ������! ������ ����� ����!";
	return message;
}

// �������� ����
string Management_�ompany::pop_house(int nom_doma)
{
	string message = "";
	if (count_of_houses > 0)
	{
		if (search_house(nom_doma))
		{
			house_in_list* before_del = first; // ����� ��������� �� ������ �������
			house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
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
			message = message + to_string(nom_doma) + "  ��� �����!\n";
			count_of_houses--;
		}
		else
			message = message + "���� � ����� ������� ���!";
	}
	else
		message = message + "��� ����� ��� ��������!";
	return message;
}

// ����� ������� ���������� ����
string Management_�ompany::show_flat_house(int nom_doma)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
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
		message = message + "���� � ����� ������� ���!";
	return message;
}

// ����� ���� ����� � ����������
string Management_�ompany::show_all_flat_house()
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
		while (ptr)
		{
			message = message + Management_�ompany::show_flat_house((ptr->house_data).get_num_house());
			ptr = ptr->next;
		}
	}
	else
		message = "���� ��� �����!";
	return message;
}

// ���������� �������� � ��������� ���
string Management_�ompany::push_flat(int nom_doma, int nom_kvar, int ploshad)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
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
		message = message + "���� � ����� ������� ���!";
	return message;
}

// �������� ������. �����. �������� �� ���������� ����
string Management_�ompany::pop_flat(int nom_doma)
{
	string message = "";
	if (search_house(nom_doma))
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
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
		message = message + "���� � ����� ������� ���!";
	return message;
}

// ����� ������� �� ������
string Management_�ompany::search_flats_by_num(int nom_kvar)
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
		while (ptr)
		{
			message = message + " � ���� � " + to_string((ptr->house_data).get_num_house()) + " --- " + (ptr->house_data).search_flat_to_show_square(nom_kvar);
			ptr = ptr->next;
		}
	}
	else
		message = "���� ��� �����!";
	return message;
}

// ����� ������� �� �������
string Management_�ompany::search_flats_by_sq(int ploshad)
{
	string message = "";
	if (count_of_houses > 0)
	{
		house_in_list* ptr = first->next; // ����� ��������� �� ������ �������
		while (ptr)
		{
			message = message + " � ���� � " + to_string((ptr->house_data).get_num_house()) + " --- " + (ptr->house_data).search_square_flats(ploshad);
			ptr = ptr->next;
		}
	}
	else
		message = "���� ��� �����!";
	return message;
}
