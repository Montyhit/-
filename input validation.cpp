// �������� �� ������������ �����

#include <iostream>

int input_validat()
{
	int num;
	std::cin >> num;

	while (true)
	{
		// �������� �� ������������ �����
		if (!std::cin)
		{
			std::cin.clear();	// ������� ������ cin
			while (std::cin.get() != '\n');

			system("cls");
		}
		break;
	}
	return num;
}