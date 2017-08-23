// Проверка на правильность ввода

#include <iostream>

int input_validat()
{
	int num;
	std::cin >> num;

	while (true)
	{
		// Проверка на правильность ввода
		if (!std::cin)
		{
			std::cin.clear();	// очистка потока cin
			while (std::cin.get() != '\n');

			system("cls");
		}
		break;
	}
	return num;
}