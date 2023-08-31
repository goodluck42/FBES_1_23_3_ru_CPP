#include <iostream>
#include <random>

int main()
{
	/* {
		int arr[3]{ 10, 20, 30 };
		int arr2[]{ 40, 50, 60 };

		std::cout << arr[3] << '\n'; // undefined behaviour
		
	}*/

	/* {
		constexpr size_t size = 6;
		char arr[size]{};

		for (int i = 0; i < size; i++)
		{
			std::cout << (void*)(arr + i) << '\n';
		}

		std::cout << 0x5C - 0x58 << '\n';
		std::cout << 0xE6 - 0xE8 << '\n';
	}*/

	constexpr size_t rows = 30;
	constexpr size_t cols = 25; // columns

	int arr[rows][cols]
	{
		{ 10, 20, 30 },
		{ 40, 50, 60 },
		{ 70, 99, 11 }
	};

	 // std::cout << arr[0][4] << '\n'; // 0 * 3 + 4 = 4
	 // std::cout << arr[1][4] << '\n'; // 1 * 3 + 4 = 7
	 // std::cout << arr[1][2] << '\n'; // 1 * 3 + 2 = 5
	 // std::cout << arr[0][15] << '\n'; // undefined behaviour

	/*{
		for (int i = 0; i < rows * cols; i++)
		{
			std::cout << arr[0][i] << '\n';
		}
	}*/

	/* {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << arr[i][j] << '\t';
			}

			std::cout << '\n';
		}
	}*/
	


	{
		std::default_random_engine engine(time(0));
		std::uniform_int_distribution<int> range(100, 999);

		int arr[rows][cols];

		// Variant 1
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = range(engine);
			}
		}


		// Variant 2

		/*for (int i = 0; i < rows * cols; i++)
		{
			arr[0][i] = range(engine);
		}*/

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << arr[i][j] << '\t';
			}

			std::cout << '\n';
		}
	}
}


/*int main()
{
	char background_color;
	char font_color;

	std::cin >> background_color >> font_color;

	// color 04

	switch (background_color)
	{
	case '0':
		switch (font_color)
		{
		case '1':
			system("color 01");
			break;
		case '2':
			system("color 02");
			break;
		case '3':
			system("color 03");
			break;
		case '4':
			system("color 04");
			break;
		case '5':
			system("color 05");
			break;
		case '6':
			system("color 06");
			break;
		case '7':
			break;
			system("color 07");
		case '8':
			system("color 08");
			break;
		case '9':\
			system("color 09");
			break;
		case 'A':
			system("color 0A");
			break;
		case 'B':
			system("color 0B");
			break;
		case 'C':
			system("color 0C");
			break;
		case 'D':
			system("color 0D");
			break;
		case 'E':
			system("color 0E");
			break;
		case 'F':
			system("color 0F");
		}
		break;
	case '1':
		switch (font_color)
		{
		case '1':
			system("color 11");
			break;
		case '2':
			system("color 12");
			break;
		case '3':
			system("color 13");
			break;
		case '4':
			system("color 14");
			break;
		case '5':
			system("color 15");
			break;
		case '6':
			system("color 16");
			break;
		case '7':
			break;
			system("color 17");
		case '8':
			system("color 18");
			break;
		case '9':\
			system("color 19");
			break;
		case 'A':
			system("color 1A");
			break;
		case 'B':
			system("color 1B");
			break;
		case 'C':
			system("color 1C");
			break;
		case 'D':
			system("color 1D");
			break;
		case 'E':
			system("color 1E");
			break;
		case 'F':
			system("color 1F");
		}
		break;
	case '2':
		break;
	case '3':
		break;
	case '4':
		break;
	case '5':
		break;
	case '6':
		break;
	case '7':
		break;
	case '8':
		break;
	case '9':
		break;
	case 'A':
		break;
	case 'B':
		break;
	case 'C':
		break;
	case 'D':
		break;
	case 'E':
		break;
	case 'F':
		break;
	}
}*/