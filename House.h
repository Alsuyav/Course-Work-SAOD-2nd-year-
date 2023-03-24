#pragma once
#include <iostream>
using namespace std;
#include "Flat.h"

#define MAX_FLATS 10

class House
{
private:
	int number_of_house; // ����� ����
	int count_of_flats; // ������� ���-�� �������
	int top; // ������ ��������� ����������� ��������
	Flat flats[MAX_FLATS]; // ������ �������

public:
	// ����������� �� ���������
	House();

	// �����������
	House(int n);

	// �������� ������ ����
	int get_num_house();

	// �������� ���-�� �������
	int get_count_flats();

	// �������� ������ ������. �����. ���������
	int get_top();

	// ����� ������ � ����
	string show_house();

	// ���������� ��������
	string push(int nom_kvartiry, int ploshad);

	// �������� ��������� �����. ��������
	string pop();

	// ��������, ���� �� �������� � ������������ �������
	bool search_flat(int nom_kvartiry);

	// ����� �������� � �������. �������
	string search_flat_to_show_square(int nom_kvartiry);

	// ����� ������� � �������. �������� � �� �����
	string search_square_flats(int ploshad);
};