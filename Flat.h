#pragma once
#include <iostream>
#include <string>
using namespace std;
class Flat
{
private:
	int number_of_flat; // ����� ��������
	int square; // ������� ��������
public:

	// ����������� �� ���������
	Flat();
	// �����������
	Flat(int n, int s);

	// �������� ������ ���������
	int get_num_flat();
	// �������� ������� ���������
	int get_sq_flat();

	// ����� ������ � ��������
	string show_flat();
};