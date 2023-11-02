#ifndef __CONSOLE__
#define __CONSOLE__
#define CONSOLE_WIDTH 900
#define CONSOLE_HEIGHT 600
#include "resource.h"
#include <windows.h>
#include <conio.h>
#include <functional>

namespace app
{
	namespace console
	{
		typedef SHORT coord;

		class console
		{
			friend console& operator<<(console& con, std::function<void(console& con)>);
		public:
			/*
				������� copy constructor � copy assignment.
			 */
			console(const console&) = delete;
			void operator=(const console&) = delete;


			/*
				���������� ��������� ��� ����� ����� ���������� ���������� ��������.
			 */
			console& operator<<(color __right);


			/*
				���������� ���������� ��� ������ �� �����. �������������� ����: double, float, short, int, long, long long, char, bool, size_t.
			 */
			console& operator<<(std::string __right);
			console& operator<<(double __right);
			console& operator<<(float __right);
			console& operator<<(short __right);
			console& operator<<(int __right);
			console& operator<<(long __right);
			console& operator<<(long long __right);
			console& operator<<(char __right);

			/*
				����� ����� const char* ��������� ��� bool, ������� � ����� ����� - ������.
			 */
			template <typename _, typename T = std::enable_if_t<std::is_same<_, bool>()>> console& operator<<(_ __right)
			{
				return this->operator<<(std::string(__right ? "true" : "false"));
			}
			console& operator<<(size_t __right);


			/*
				���������� ���������� ��� ����� � ����������. �������������� ����: double, float, short, int, long, long long, char, bool, size_t.
			 */
			console& operator>>(std::string& __right);
			console& operator>>(double& __right);
			console& operator>>(float& __right);
			console& operator>>(short& __right);
			console& operator>>(int& __right);
			console& operator>>(long& __right);
			console& operator>>(long long& __right);
			console& operator>>(char& __right);
			console& operator>>(bool& __right);
			console& operator>>(size_t& __right);

			/*
				���������� ������ �������������. ������ �������� ���������� � �������� ���� X � Y.

				x - �������� ��� X;
				y - �������� ��� Y;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(const coord x, const coord y, const std::string& __arg, const size_t t);


			/*
				���������� ������� �������������. ������ �������� ���������� � �������� ���� X � Y.

				x - �������� ��� X;
				y - �������� ��� Y;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(const coord x, const coord y, char __arg, const size_t t);


			/*
				���������� ������ �������������. ������ �������� ���������� � ��� X. ��� Y ������� �� ������� ������� �������.

				x - �������� ��� X;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(const coord x, const std::string& __arg, const size_t t);


			/*
				���������� ������� �������������. ������ �������� ���������� � ��� X. ��� Y ������� �� ������� ������� �������.

				x - �������� ��� X;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(const coord x, char __arg, const size_t t);


			/*
				���������� ������ ������������� ������� ������� ������� �������.

				__arg - ������, ��� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(const std::string& __arg, const size_t t);


			/*
				���������� ������� ������������� ������� ������� ������� �������.

				__arg - ������, ��� ����� �����������;
				t - ���������� ����������.
			 */
			void repeat(char __arg, const size_t t);


			/*
				��-�� ��������������� �������������� �� int � char - ������ ����� ��� �������.
			 */
			void repeat(int, const size_t) = delete;


			/*
				���������� ������ �����������. ������ �������� ���������� � �������� ���� X � Y.

				x - �������� ��� X;
				y - �������� ��� Y;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(const coord x, const coord y, const std::string& __arg, const size_t t);


			/*
				���������� ������� �����������. ������ �������� ���������� � �������� ���� X � Y.

				x - �������� ��� X;
				y - �������� ��� Y;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(const coord x, const coord y, char __arg, const size_t t);


			/*
				���������� ������ �����������. ������ �������� ���������� � ��� X. ��� Y ������� �� ������� ������� �������.

				x - �������� ��� X;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(const coord x, const std::string& __arg, const size_t t);


			/*
				���������� ������� �����������. ������ �������� ���������� � ��� X. ��� Y ������� �� ������� ������� �������.

				x - �������� ��� X;
				__arg - ������, ������� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(const coord x, char __arg, const size_t t);


			/*
				���������� ������ ����������� ������� ������� ������� �������.

				__arg - ������, ��� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(const std::string& __arg, const size_t t);


			/*
				���������� ������� ����������� ������� ������� ������� �������.

				__arg - ������, ��� ����� �����������;
				t - ���������� ����������.
			 */
			void vrepeat(char __arg, const size_t t);

			/*
				��-�� ��������������� �������������� �� int � char - ������ ����� ��� �������.
			 */
			void vrepeat(int, const size_t) = delete;


			/*
				���������� ������ �� ��������� ������� �������� ���������.

				x - �������� ��� X;
				y - �������� ��� Y;
				__arg - ������, ��� ����� �����������;
				t - ���������� ����������;
				direction - �����������: NW - ������-�����; NE - ������-������; SW - ���-�����; SE - ���-������.


				NW (������-�����)

				//
				//  *
				//   *
				//    *
				//     0
				//
				//
				//

				NE (������-������)

				//
				//       *
				//      *
				//     *
				//    0
				//
				//
				//

				SE (���-������)

				//
				//
				//
				//
				//    0
				//     *
				//      *
				//       *

				SE - (���-������)
				//
				//
				//
				//    0
				//   *
				//  *
				// *
			 */
			void drepeat(const coord x, const coord y, const std::string& __arg, const size_t t, diag_direction direction);

			/*
				������ ������ �� �������� �������.

				x - ��� X;
				y - ��� Y;
			 */
			void scpos(const coord x, const coord y);


			/*
				��������� ������� ������� �������. ����� ����� ��������� � ���� ������� ����� rcpos.
			 */
			void svcpos();


			/*
				������ ������ �� ����� ���������� ������� �� svcpos.
			 */
			void rcpos();


			/*
				�������� ������� ���������� �������. ���� ����� ������ ���� ���, �� ����� �������� nullptr.

				x - ������ �������� ��� X, � ������� ����� �������� ��������;
				y - ������ �������� ��� Y, � ������� ����� �������� ��������;
			 */
			void gcpos(coord* x, coord* y);


			/*
				����������� ������ ����� �� ��� Y. 
			 */
			void mvup();


			/*
				����������� ������ ������ �� ��� X.
			 */
			void mvright();


			/*
				����������� ������ ���� �� ��� Y.
			 */
			void mvdown();


			/*
				����������� ������ ����� �� ��� X.
			 */
			void mvleft();


			/*
				������ ������ �� ��� X �� ������� ���������.
			 */
			void mvx0();


			/*
				���������� ������ �� ��� Y �� ������� ���������.
			 */
			void mvy0();


			/*
				���������� ������ �� ��� X � Y �� ������� ���������.
			 */
			void mvxy0();


			/*
				�� �������� ���������� ��������� ������.

				x - ��� X;
				y - ��� Y;
				__arg - ���� ������.
			 */
			void at(const coord x, const coord y, const std::string& __arg);


			/*
				��������� �� �������� � ����������.

				read_length - ����� ������� �� ���������� (�����������). ���� ���������� � ������� 4, �� ������ ����� ������ ������ 4 ��������.
			 */
			std::string read(size_t read_length = std::string::npos);


			/*
				��������� � ���������� ���� �������� ������ � ���������� ��� enum.
			 */
			key readk();


			/*
				���������� ������������ ������ �������� ������. ���� ���� ������� ������� �� ����� ����������, ��������� ����� ����������.

				k - ������, ������� ������������ ������ ������.
			 */
			void readk(key k);


			/*
				���������� ������������ ������ ��������(��) ������(�) �� ���������. ��������, �.� ��������� �� ������� ����� �������� ���� key � ������ ���������� bool.

				predicate - �������� (��������� �� �������, ������������ bool).
			 */
			key readk(bool(*predicate)(key k));


			/*
				���������� ������, ������� ��������� �� ������� �����������.
			 */
			char grabch();


			/*
				���������� ������, ������� ��������� �� �����������, ������� ����������� �������� ������������� (�������������).

				x - �������� ��� X;
				y - �������� ��� Y.
			 */
			char grabch(coord x, coord y);


			/*
				������� ���� ������ �� �������� �����������.

				x - �������� ��� X;
				y - �������� ��� Y.
			 */
			void erase(coord x, coord y);


			/*
				������� N-�� ���������� �������� ������� � �������� ���������.

				x - �������� ��� X;
				y - �������� ��� Y;
				count - ���������� �������� ��� ��������.
			 */
			void erase(coord x, coord y, size_t count);


			/* (get boundary)
				������� ������������ �������� ��� � � Y. ����� ������� ������ ���� ���, ������ ������� nullptr. � ������� io.getbnd(&x, nullptr);.

				x - �������� ��� X;
				y - �������� ��� Y;
			 */

			void getbnd(coord* x, coord* y);

			void set_color_mode(color_mode mode);

			void set_base_color(color mode);

			/*
				...
			 */
			static console& get();
			static console& get(int width, int height);
		private:
			console();
			console(int width, int height);
			HANDLE stdhandle;
			HWND window;
			coord sx;
			coord sy;
			color_mode cmode;
			color base_color;
			int readch();
		};
		extern console& io;
	}
}
#endif
