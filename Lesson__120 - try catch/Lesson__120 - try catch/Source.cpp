#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*try catch - ��������� �������������� ��������.
* 
* � ����� try �� �������� ���-�� ���������. ���� � ������ ����� ����� ��� ��, ��� ����������� ��� �������������� ������, 
* ����� ������ ������ - ��������� ������ ����������. ���� ���-���� ���������� �������������� ��������, ����� ���������� ���� catch
* 
* ��, ��� �� ������� � ���� catch, ������� �� ������������ ������, � ������� �� ��������. �� ���� ����� ��������� ����� ��������
* � �������, � ������ Ifstream ��������� �������������� �������� �� ������� ���������. ������, ���� �� ������� ����� exceptions � ������� 
* fstream � ����������� (ifstream::badbit | fstream::failbit) - ����� �������� � ������������ try catch. 
* exceptions - � ���� ����������. 
* 
* ���� � ����� try ���-�� ���������, �� ���, ��� ��������� � ���� ���� �������, ���������� �� �����.
* 
* � ����� catch � ������� ������ what() � ������� ������ exception �� ����� ������ ������ �� ������. 
* ����� exception ��� ������� ������� �����, � ������� ��������� ��� ������ ������. ��������, ��� ������� �� ����.
* � ���������� catch �� ����� ��������� ����������� ����� exception, �������� ��� ifstream. ����� ����� ����� ��������� ���: ifstream::failure
* � ������ ������ ����, ��������, ����� code(), ������� ��������� ���������� ��� ������.
* 
*/

int main()
{
	setlocale(LC_ALL, "ru");

	ifstream fin;
	string path = "maslo.txt";	//���� �� ����������� �������� ����� � ��� �� ������ ���������, �� ������ �������� ������.
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "������� �������� �����" << endl;
		fin.open(path);
		cout << "���� ������!" << endl;
		fin.close();
	}
	catch (const ifstream::failure& ex)
	{
		cout << "������ �������� �����!" << endl;
		cout << ex.what() << endl;
		cout << ex.code() << endl;
	}

	return 0;
}