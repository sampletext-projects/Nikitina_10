#include <iomanip>
#include <iostream>

using namespace std;

string to_string(int number)
{
	if (number <= 0) return "Не поддерживаемое число.";
	if (number > 100) return "Не поддерживаемое число.";

	if (number < 10)
	{
		switch (number)
		{
		case 1: return "Один";
		case 2: return "Два";
		case 3: return "Три";
		case 4: return "Четыре";
		case 5: return "Пять";
		case 6: return "Шесть";
		case 7: return "Семь";
		case 8: return "Восемь";
		case 9: return "Девять";
		}
	}
	else if (number % 10 == 0) //все кратные 10
	{
		switch (number / 10)
		{
		case 1: return "Десять";
		case 2: return "Двадцать";
		case 3: return "Тридцать";
		case 4: return "Сорок";
		case 5: return "Пятдесят";
		case 6: return "Шестьдесят";
		case 7: return "Семьдесят";
		case 8: return "Восемьдесят";
		case 9: return "Девяносто";
		}
	}
	else if (number > 10 && number < 20)
	{
		switch (number % 10)
		{
		case 1: return "Одиннадцать";
		case 2: return "Двенадцать";
		case 3: return "Тринадцать";
		case 4: return "Четырнадцать";
		case 5: return "Пятнадцать";
		case 6: return "Шестнадцать";
		case 7: return "Семнадцать";
		case 8: return "Восемнадцать";
		case 9: return "Девятнадцать";
		}
	}
	else //все не особые случаи
	{
		//конвертируем десятки и единицы рекурсивным вызовом, т.к. их обработка произведена до текущего else
		// деление на 10 и умножение на 10 позволяет отсечь десятки
		return to_string(number / 10 * 10) + " " + to_string(number % 10);
	}
}

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	cout << "Автор: Никитина Дарья Сергеевна\n";

	for (int i = 0; i < 100; ++i)
	{
		cout << to_string(i) << "\n";
	}

	system("pause");
	return 0;
}
