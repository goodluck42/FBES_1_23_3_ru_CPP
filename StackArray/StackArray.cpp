#include <iostream>
#include <random>
#include <Windows.h>

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

		/*constexpr int size = 4;

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

	// C++ style random
	{
		std::default_random_engine engine(time(0));

		std::uniform_int_distribution<int> myrange(10, 99);

		int rnd = myrange(engine);

		std::cout << rnd << '\n';
	}
}