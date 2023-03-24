#include "House.h"

// ����������� �� ���������
House::House() : number_of_house(-1), count_of_flats(0), top(-1) {};

// �����������
House::House(int n) : number_of_house(n), count_of_flats(0), top(-1) {};

// �������� ������ ����
int House::get_num_house() { return number_of_house; }

// �������� ���-�� �������
int House::get_count_flats() { return count_of_flats; }

// �������� ������ ������. �����. ���������
int House::get_top() { return top; }

// ����� ������ � ����
string House::show_house()
{
	string message = "��� � " + to_string(number_of_house) + ":\n";
	if (count_of_flats > 0)
	{
		for (int i = 0; i < count_of_flats; i++)
		{
			message = message + flats[i].show_flat() + "\n";
			cout << endl;
		}
	}
	else
		message = message + "� ������ ���� ��� �������!\n";
	return message;
}

// ���������� ��������
string House::push(int nom_kvartiry, int ploshad)
{
	string message = "";
	if (top < MAX_FLATS - 1)
	{
		if (!search_flat(nom_kvartiry)) // ���� ��� �������� � ���� �������
		{
			Flat temp_kvartira(nom_kvartiry, ploshad); // ����. ���������� ��� ������
			flats[++top] = temp_kvartira; // ������ ��������
			message = message + temp_kvartira.show_flat()+ " ���������!\n";
			count_of_flats++;
		}
		else
			message = "�������� � ����� ������� ��� ����������!";
	}
	else
		message = "��� ����� ��� ������ ����� ��������!\n";
	return message;
}

// ��������, ���� �� �������� � ������������ �������
bool House::search_flat(int nom_kvartiry)
{
	if (top >= 0)
	{
		int found = 0; // ���� ����������
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

// �������� ��������� �����. ��������
string House::pop()
{
	string message = "";
	if (top >= 0)
	{
		flats[top] = Flat();
		top--; // ���������� ������� ����. ��������
		message = "��������� ����������� �������� ���� �������!";
		count_of_flats--;
	}
	else
		message = "� ���� ���� ��� ��� �������!\n";
	return message;
}

// ����� �������� � �������. �������
string House::search_flat_to_show_square(int nom_kvartiry)
{
	string message = "";
	if (top >= 0)
	{
		int found = 0; // ���� ����������
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
			message = "����� ������� ���!\n";
		return message;
	}
	else
		message = "� ������ ���� ��� �������!\n";
	return message;
}

// ����� ������� � �������. ��������
string House::search_square_flats(int ploshad)
{
	string message = "";
	if (top >= 0)
	{
		int found = 0; // ���� ����������
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
			message = message + "����� ������� ���!\n";
		return message;
	}
	else
		message = message + "� ������ ���� ��� �������!\n";
	return message;
}