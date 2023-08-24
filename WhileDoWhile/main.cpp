#include <iostream>
#include <Windows.h>


enum class Audience1
{
	PC1 = 1,
	PC2 = 2,
	PC3 = 3
};

enum class Audience2
{
	PC1,
	PC2,
	PC3
};


class Int32
{
private:
	int m_value;
public:
	Int32(int a_value) : m_value(a_value) { }

	int get() const
	{
		return this->m_value;
	}

	Int32 operator++(int)
	{
		Int32 copy{ *this };
		std::cout << "operator++(int)" << '[' << copy.m_value << ']' << '\n';

		this->m_value += 1;

		return copy;
	}
	
	Int32 operator--(int)
	{
		Int32 copy{ *this };
		std::cout << "operator--(int)" << '[' << copy.m_value << ']' << '\n';

		this->m_value -= 1;

		return copy;
	}
	
	Int32& operator++()
	{
		this->m_value += 1;
		std::cout << "operator++()" << '[' << this->m_value << ']' << '\n';

		return *this;
	}
	
	Int32& operator--()
	{
		this->m_value -= 1;
		std::cout << "operator--()" << '[' << this->m_value << ']' << '\n';

		return *this;
	}

	Int32 operator+(const Int32& rhs)
	{
		std::cout << "operator+(const Int32& rhs)" << "[" << this->m_value << '+' << rhs.m_value << " = " << this->m_value + rhs.m_value << ']' << '\n';
		return Int32{ this->m_value + rhs.m_value };
	}
	
	Int32 operator-(const Int32& rhs)
	{
		std::cout << "operator-(const Int32& rhs)" << "[" << this->m_value << '-' << rhs.m_value << " = " << this->m_value - rhs.m_value << ']' << '\n';

		return Int32{ this->m_value - rhs.m_value };
	}
};



int main()
{
	//Audience1 blablabla = Audience1::PC1;
	//Audience2 blablabla2 = Audience2::PC1;


	/* {
		int input; // 1 2 3

		std::cin >> input;

		Audience1 pc = (Audience1)input;

		if (pc == Audience1::PC1)
		{
			std::cout << "You've chosen pc1\n";
		}
		else if (pc == Audience1::PC2)
		{
			std::cout << "You've chosen pc2\n";
		}
		else if (pc == Audience1::PC3)
		{
			std::cout << "You've chosen pc3\n";
		}
	}*/

	/* {


		int a = 10;

		//--a;
		//++a;

		std::cout << a;
	}*/

	// Postfix increment
	/*{
		int a = 10;
		int b = a++;
		int c = b++;

		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
		std::cout << "c = " << c << '\n';

		std::cout << "-----------------\n";
	}*/

	// Prefix increment

	/*{
		int a = 10;
		int b = ++a;
		int c = ++b;

		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
		std::cout << "c = " << c << '\n';

		std::cout << "-----------------\n";
	}*/

	// Prefix & postfix increment & decrement
	{
		/* {
			int a = 5; // a = 5
			//      5   +   6 - 6
			int b = a++ + ++a - a--;

			std::cout << a << '\n';
			std::cout << b << '\n';
		}*/

		{
			Int32 a = 5; // a = 6
			//
			Int32 b = (a++ + ++a - a--);

			std::cout << a.get() << '\n';
			std::cout << b.get() << '\n';
		}
	}
	
	/* {
		int i = 5;

		while (i < 10)
		{
			if (i == 7)
			{
				++i;
				continue;
			}

			std::cout << i << '\n';

			++i;
		}
	}*/

	/*
	{
		int i = 0;
		int x = 0;

		std::cout << "First = " << i << '\n';

		while (x++ < 100)
		{
			i += 1;
		}

		std::cout << "Second = " << i << '\n';

		x = 0;
		while (x++ < 100)
		{
			i += 1;
		}

		std::cout << "Third = " << i << '\n';

		x = 0;
		while (x++ < 100)
		{
			i += 1;
		}

		std::cout << "Result = " << i << '\n';
	}*/

	/*{
		int a;

		std::cin >> a;

		std::cout << a / 0;
	}*/

	/*{


		int begin;
		int end;

		std::cin >> begin >> end;

		do
		{
			std::cout << begin << '\n';
			++begin;
		} while (begin < end);


	}*/

	/*{
		int ping = 0;

		do
		{
			std::cout << "ping 127.0.0.1#" << ping << '\n';

			++ping;
			Sleep(500);
		} while (ping < 4);
	}*/

	/*{
		do
		{
			std::cout << "Hello C++" << '\n';
		} while (false);

		while (false)
		{
			std::cout << "Hello C++" << '\n';
		}
	}*/

	/*std::cout << "1. First\n2. Second\n";

	bool flag = true;

	while (flag)
	{
		int choice;

		std::cin >> choice;

		switch (choice)
		{
			case 1:
			{
				std::cout << "First" << '\n';
				break;
			}
				
			case 2:
			{
				std::cout << "Second" << '\n';
				break;
			}
				
			case 0:
			{
				flag = false;
			}
				
		}
	}*/



}