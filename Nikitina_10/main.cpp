#include <iomanip>
#include <iostream>

using namespace std;

string to_string(int number)
{
	if (number <= 0) return "�� �������������� �����.";
	if (number > 100) return "�� �������������� �����.";

	if (number < 10)
	{
		switch (number)
		{
		case 1: return "����";
		case 2: return "���";
		case 3: return "���";
		case 4: return "������";
		case 5: return "����";
		case 6: return "�����";
		case 7: return "����";
		case 8: return "������";
		case 9: return "������";
		}
	}
	else if (number % 10 == 0) //��� ������� 10
	{
		switch (number / 10)
		{
		case 1: return "������";
		case 2: return "��������";
		case 3: return "��������";
		case 4: return "�����";
		case 5: return "��������";
		case 6: return "����������";
		case 7: return "���������";
		case 8: return "�����������";
		case 9: return "���������";
		}
	}
	else if (number > 10 && number < 20)
	{

		switch (number % 10)
		{
		case 1: return "�����������";
		case 2: return "����������";
		case 3: return "����������";
		case 4: return "������������";
		case 5: return "����������";
		case 6: return "�����������";
		case 7: return "����������";
		case 8: return "������������";
		case 9: return "������������";
		}
	}
	else //��� �� ������ ������
	{
		//������������ ������� � ������� ����������� �������, �.�. �� ��������� ����������� �� �������� else
		// ������� �� 10 � ��������� �� 10 ��������� ������ �������
		return to_string(number / 10 * 10) + " " + to_string(number % 10);
	}
}

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	cout << "�����: �������� ����� ���������\n";

	for (int i = 0; i < 100; ++i)
	{
		cout << to_string(i) << "\n";
	}

	system("pause");
	return 0;
}
