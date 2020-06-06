#include <iomanip>
#include <iostream>

using namespace std;

string to_string(int number, bool append_year)
{
	if (number <= 0) return "Не поддерживаемое число.";
	if (number > 100) return "Не поддерживаемое число.";
	string ret;
	if (number < 10)
	{
		switch (number)
		{
		case 1: ret = "Один";
			break;
		case 2: ret = "Два";
			break;
		case 3: ret = "Три";
			break;
		case 4: ret = "Четыре";
			break;
		case 5: ret = "Пять";
			break;
		case 6: ret = "Шесть";
			break;
		case 7: ret = "Семь";
			break;
		case 8: ret = "Восемь";
			break;
		case 9: ret = "Девять";
			break;
		}
		if (append_year)
		{
			if (number == 1)
			{
				ret += " год";
			}
			else if (number >= 2 && number <= 4)
			{
				ret += " года";
			}
			else
			{
				ret += " лет";
			}
		}
		return ret;
	}
	else if (number % 10 == 0) //все кратные 10
	{
		switch (number / 10)
		{
		case 1: ret = "Десять";
			break;
		case 2: ret = "Двадцать";
			break;
		case 3: ret = "Тридцать";
			break;
		case 4: ret = "Сорок";
			break;
		case 5: ret = "Пятдесят";
			break;
		case 6: ret = "Шестьдесят";
			break;
		case 7: ret = "Семьдесят";
			break;
		case 8: ret = "Восемьдесят";
			break;
		case 9: ret = "Девяносто";
			break;
		}

		if (append_year)
		{
			ret += " лет";
		}
		return ret;
	}
	else if (number > 10 && number < 20)
	{
		switch (number % 10)
		{
		case 1: ret = "Одиннадцать";
			break;
		case 2: ret = "Двенадцать";
			break;
		case 3: ret = "Тринадцать";
			break;
		case 4: ret = "Четырнадцать";
			break;
		case 5: ret = "Пятнадцать";
			break;
		case 6: ret = "Шестнадцать";
			break;
		case 7: ret = "Семнадцать";
			break;
		case 8: ret = "Восемнадцать";
			break;
		case 9: ret = "Девятнадцать";
			break;
		}

		if (append_year)
		{
			ret += " лет";
		}
		return ret;
	}
	else //все не особые случаи
	{
		//конвертируем десятки и единицы рекурсивным вызовом, т.к. их обработка произведена до текущего else
		// деление на 10 и умножение на 10 позволяет отсечь десятки
		return to_string(number / 10 * 10, false) + " " + to_string(number % 10, true);
	}
}

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	cout << "Автор: Никитина Дарья Сергеевна\n";

	for (int i = 0; i < 100; ++i)
	{
		cout << to_string(i, true) << "\n";
	}

	system("pause");
	return 0;
}
