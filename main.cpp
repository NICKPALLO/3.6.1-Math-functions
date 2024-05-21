#include<iostream>
#include<Windows.h>
#include"functions.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int firstNum, secNum, choise;
	while (true)
	{
	std::cout << "¬ведите первое число: ";
	std::cin >> firstNum;
	std::cout << "¬ведите второе число: ";
	std::cin >> secNum;
		std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - выход): ";
		std::cin >> choise;
		switch (choise)
		{
		case 1:
			add(firstNum, secNum);
			break;
		case 2:
			subtract(firstNum, secNum);
			break;
		case 3:
			multiply(firstNum, secNum);
			break;
		case 4:
			divide(firstNum, secNum);
			break;
		case 5:
			power(firstNum, secNum);
			break;
		case 6:
			return 0;
		default:
			std::cout << "Ќеверное число\n";
		}
	}
}