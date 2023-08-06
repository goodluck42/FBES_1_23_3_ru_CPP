#include <iostream>


using namespace std;

int main()
{
	
	/* {
		int num;

		cout << "Enter number: ";
		cin >> num;

		switch (num)
		{
			case 64:
				cout << "num = 64" << '\n';
				break;
			case 10: // if (num == 10) {}
				cout << "num = 10" << '\n';
				break;
			case 42: // else if (num == 42) {}
				cout << "num = 42" << '\n';
				break;
			case 90: // else if (num == 90) {}
				cout << "num = 90" << '\n';
				break;
			default: // else {}
				cout << "none of them" << '\n';
		}
	}*/

	/* {
		char mode; // r, w, a

		cout << "Enter mode (r | w | a): ";
		cin >> mode;

		switch (mode)
		{
			case 'r':
			{
				auto text = "Reading from file";
				cout << text << '\n';
				break;
			}
			case 'w':
				cout << "Writing to file" << '\n';
				break;
			case 'a':
				cout << "Appending to file" << '\n';
				break;
			default:
				cout << "Error: No such mode" << '\n';
		}
	}*/

	// wasd
	{
		char move;

		cout << "Enter move (w | a | s | d): ";
		cin >> move;

		switch (move)
		{
			case 'W':
			case 'w':
				cout << "Moving forward" << '\n';
				break;
			case 'A':
			case 'a':
				cout << "Moving left" << '\n';
				break;
			case 'S':
			case 's':
				cout << "Moving backward" << '\n';
				break;
			case 'D':
			case 'd':
				cout << "Moving right" << '\n';
				break;
			default:
				cout << "Error: No such keybind" << '\n';
		}
	}
}