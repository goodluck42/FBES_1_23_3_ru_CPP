#include <iostream>

enum class Mode  // C++ style enum
{
	APPEND = 'a', // = 97
	WRITE = 'w', // = 119
	READ = 'r', // = 114,
};

enum class Mode2  // C++ style enum
{
	APPEND = 'a', // = 97
	WRITE = 'w', // = 119
	READ = 'r', // = 114,
};

enum class Menu // C++ style enum
{
	NEW_GAME = 1, // 1
	LOAD_GAME, // 2
	EXIT // 3
};

int main()
{
	int cout = 42;
	int cin = 10;
	int value = 20;

	system("color ");

	//std::cin >> value;
	std::cout << "Hello C++\n" << value << std::endl;

	//{
	//	Menu menu = (Menu)1; // NEW_GAME
	//}
	//
	//{
	//	Menu menu = Menu::EXIT;

	//	std::cout << (int)menu;
	//}
	
	// :: - scope resolution operator
	{
		char input;

		std::cout << "Enter mode: ";
		std::cin >> input;

		Mode mode = (Mode)input;

		switch (mode)
		{
			default:
			{
				std::cout << "Error: No such mode" << '\n';
				break;
			}

			case Mode::APPEND:
			{
				std::cout << "Appending to file" << '\n';
				break;
			}
			
			case Mode::WRITE:
			{
				std::cout << "Writing to file" << '\n';
				break;
			}
				
			case Mode::READ:
			{
				auto text = "Reading from file";
				std::cout << text << '\n';
			}
		}
	}
	/* {
		int input;

		std::cin >> input;

		Menu choice = (Menu)input;

		switch (choice)
		{
			case Menu::NEW_GAME:
				std::cout << "New game\n";
				break;
			case Menu::LOAD_GAME:
				std::cout << "Load game\n";
				break;
			case Menu::EXIT:
				std::cout << "Exit\n";
		}
	}*/
}