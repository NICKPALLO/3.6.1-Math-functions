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
	std::cout << "������� ������ �����: ";
	std::cin >> firstNum;
	std::cout << "������� ������ �����: ";
	std::cin >> secNum;
		std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, 6 - �����): ";
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
			std::cout << "�������� �����\n";
		}
	}
}