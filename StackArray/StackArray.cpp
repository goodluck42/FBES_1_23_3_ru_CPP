#include <iostream>
#include <random>
#include <Windows.h>
#include <iomanip>

int main()
{
	// const vs constexpr
	{
		/*int s;

		std::cin >> s;

		const int value = s;

		std::cout << value;*/

		/*int s;

		std::cin >> s;

		constexpr int value = s; // error

		std::cout << value;*/
	}
	{

		/*{
			bool a{};
			int b{16};

			std::cout << std::boolalpha;

			std::cout << a << '\n';
			std::cout << b << '\n';
		}*/

		/*constexpr size_t size = 4;

		// Stack array
		unsigned int arr[size]{};

		arr[0] = 42.9;
		arr[1] = -10;
		arr[2] = 5;

		std::cout << arr[0] << '\n';
		std::cout << arr[1] << '\n';
		std::cout << arr[2] << '\n';
		std::cout << arr[3] << '\n';
		*/
	}

	// C style random
	/* {
		srand(time(0));

		int min = 10;
		int max = 99;
		//                          90
		//           21335  % (99 - 10 + 1)
		std::cout << rand() % (max - min + 1) + min;
	}*/

	// C++ style random (int)
	/* {
		constexpr size_t size = 6;

		int arr[size];

		std::default_random_engine engine(time(0));

		std::uniform_int_distribution<int> myrange(10, 99);

		int rnd = myrange(engine);

		std::cout << rnd << '\n';
	}*/

	// C++ style random (double)
	/* {
		constexpr size_t size = 10;

		double arr[size];

		std::default_random_engine engine(time(0));

		std::uniform_real_distribution<double> myrange(10, 99);

		for (int i = 0; i < size; i++)
		{
			arr[i] = myrange(engine);
		}

		std::cout << std::setprecision(8);

		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	/* {
		//typedef unsigned long long ullong;

		//ullong a = 42UL;

		constexpr size_t size = 10;

		int arr[size]{};


		std::default_random_engine engine(time(0));

		std::uniform_int_distribution<int> myrange(10, 99);

		for (int i = 0; i < size; i++)
		{
			int rnd = myrange(engine);

			arr[i] = rnd;
		}

		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	{
		constexpr size_t size = 3;

		int arr[size];

		for (int i = 0; i < size; i++)
		{
			std::cin >> arr[i];
		}
		
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\t';
		}
	}
}