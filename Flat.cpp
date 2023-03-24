#include "Flat.h"

// ����������� �� ���������
Flat::Flat() : number_of_flat(-1), square(-1) {};

// �����������
Flat::Flat(int n, int s) : number_of_flat(n), square(s) {};

// �������� ������ ���������
int Flat::get_num_flat() { return number_of_flat; }

// �������� ������� ���������
int Flat::get_sq_flat() { return square; }

// ����� ������ � ��������
string Flat::show_flat()
{
	return "�������� � " + to_string(number_of_flat) + " (" + to_string(square) + " ��. �)";
}
