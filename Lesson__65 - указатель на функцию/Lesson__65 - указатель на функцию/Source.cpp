#include <iostream>
#include <string>

using namespace std;

/*��������� �� �������, ���������: ���-������_(*���-���������)_(��������� �������)
��������� ��������� �� ������� �� ����� �������� �������, �������� �� ����������� � ���.
����������� - ����������� ������� ������������ ������ ������ �����.

��� ��� ������ �����������: ����������� �������� �����-�� �������, ������� ����� ������ ���-��, �� �� ����
�� ����� ����� ��� ��� ������ � ��, ��� ��� ������, ����� �������� �� ����, ����� �������� ��� ����� ���������.

��������: �� ��������� ����������� ��������, ������� ���������� ������������� ������������ �����������.
���� ���������� ������ �������� ������������ ������, � ��� � ������� ���� ������. ������ �� ��� �����
�������� �������, ������� ����� �������� ������ ��� ��� �� ���� ������(����� �� �� ����� ����������), ������
������ �������� �������, ������� ����� ����������� ����� ������ � ���������� ������� ������ ��������(�� case 3)
������ ��������: �� �� ������ ��� ���������� ������� ����� ������. ��� ��� �� ���������(�� �� ������ � ����� �������
����������).
�� ����� ������� ����� ���� ����, � ������ - �������. � ������ ��� �������� ��������� ����������� �����������
����, ��������� ����� ����������.
�� ������� ����� �� ��������� ���������: ������� ������� showData, ������� ���������� ��������� ��������� �������

������: ������� ����� �����������, ������ ����� ��������� ��� ���� ������� ������� ����(���������� ���������,
���������� ������������ ��������). ������: void universalConstruction(string(*func)()). string(*func)() - ��� ��������
� ���� �������. ��� ������ - string, �� ���� ��������� ����� ���������(������ ��� ���������/������), ��� ����������.

*/

//void func1()
//{
//	cout << "i am func1" << endl;
//}
//
//void func2()												//case 1
//{
	//cout << "i am func2" << endl;
//}

//int func3(int a)
//{
//	return a + 5;
//}
//															//case 2
//int func4(int a)
//{
//	return a * 5;
//}


//string dataFromBD()
//{
//	return "dataFromBD";
//}
//
//string dataFromWebServer()
//{
//	return "dataFromWebServer";
//}															//case 3
//
//void showData(bool isFromBD)
//{
//	if (isFromBD)
//	{
//		cout << dataFromBD() << endl;
//	}
//	else
//	{
//		cout << dataFromWebServer() << endl;
//	}
//}

string GetDataType1()
{
	return "data type 1";
}

string GetDataType2()
{
	return "data type 2";
}
															//case 4
string GetDataType3()
{
	return "data type 3";
}

void universalConstruction(string(*func)())
{
	cout << func() << endl;
}


void main()
{
	/*void(*funcPointer)();			//������������� ��������� �� �������(������)
	funcPointer = func2;			//����������� ��������� ����� �������
	funcPointer();*/				//���������� � ������� ����� ���������

	
	/*int(*funcPointer)(int k);
	funcPointer = func4;					//for case 2
	cout << funcPointer(10) << endl;*/


	//showData(true);							//for case 3


	universalConstruction(GetDataType1);		//for case 4
}