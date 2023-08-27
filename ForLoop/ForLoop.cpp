#include <iostream>
#include <windows.h>
#include <tuple>

int main()
{
	
	/* {
		//   1            2    4
		for (int i = 0; i < 5; i++)
			// 3
		{
			std::cout << i << '\n';
		}
	}*/

	/* {
		int i = 0;

		for (; i < 5; ++i)
		{
			std::cout << i << '\n';
		}
		std::cout << "------\n";

		for (; i < 10; i++)
		{
			std::cout << i << '\n';
		}
	}*/

	/* {
		for (char i = 0;; i++)
		{
			std::cout << (int)i << '\n';
			Sleep(50);

			if (i == 50)
			{
				break;
			}
		}
	}*/

	{
		/*int i = 0;

		while (i < 10)
		{
			if (i == 5)
			{
				++i;
				continue;
			}

			std::cout << i++ << '\n';
		}*/


		/*for (int i = 0; i < 10; ++i)
		{
			if (i == 5)
			{
				continue;
			}

			std::cout << i << '\n';
		}*/

		// for (int i = 0; i < 20; std::cout << i++ << '\n');
	}

	//{
	//	/*int value;

	//	std::cin >> value;

	//	int result = value % 2 == 0 ? 1 : 0;

	//	std::cout << result;*/

	//	///////

	//	int value;

	//	std::cin >> value;


	//	// 1 - positive
	//	// -1 - negative
	//	// 0 - zero

	//	int result = value > 0 ? 1 : (value < 0 ? -1 : 0);

	//	std::cout << result;

	//	if (value > 0)
	//	{
	//		result = 1;
	//	}
	//	else if (value < 0)
	//	{
	//		result = -1;
	//	}
	//	else
	//	{
	//		result = 0;
	//	}

	//	
	//	/*for (auto [a, b] = std::tuple{ 5, 2.5 }; a < 5; ++a)
	//	{

	//	}*/

	//}

	//{
	//	// endless for
	//	for (;;)
	//	{

	//	}
	//}


	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; j++)
			{
				std::cout << "* ";
			}

			std::cout << '\n';
		}
	}
}