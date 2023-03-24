#pragma once
#include "House.h"
#include <string>

struct house_in_list
{
	House house_data;
	house_in_list* next;
};


class Management_�ompany
{
private:
	string name; // �������� ����������� ��������
	house_in_list* first; // ������ �����
	int count_of_houses; // ������� ���-�� �����
public:
	// ����������� �� ���������
	Management_�ompany();

	// �����������
	Management_�ompany(string nazv);

	// ��������� ����� ��������
	void change_name(string nazv);

	// �������� �������� ��������
	string get_name();
	// �������� ���-�� �������
	int get_count_houses();

	// ����� ���� � ��������� �������
	int search_house(int search_house);

	// �������� ��� � ������ �������� ��� ������
	string push_house(int nom_doma);

	// ����� ���� ������� �����
	string show_all_houses();

	// ����� ���� � ��������� �������
	string search_house_test(int search_house);

	// �������� ����
	string pop_house(int nom_doma);

	// ����� ������� ���������� ����
	string show_flat_house(int nom_doma);

	// ����� ���� ����� � ����������
	string show_all_flat_house();

	// ���������� �������� � ��������� ���
	string push_flat(int nom_doma, int nom_kvar, int ploshad);

	// �������� ������. �����. �������� �� ���������� ����
	string pop_flat(int nom_doma);

	// ����� ������� �� ������
	string Management_�ompany::search_flats_by_num(int nom_kvar);

	// ����� ������� �� �������
	string Management_�ompany::search_flats_by_sq(int ploshad);
};
