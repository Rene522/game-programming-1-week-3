#include <iostream>
#include <windows.h>


class Window
{
public:
	void setWindow(int width, int height)
	{
		this->width = width;
		this->height = height;

		SMALL_RECT windowSize = { 10, 10, width, height };
		if (!SetConsoleWindowInfo(hConsole, TRUE, &windowSize))
		{
			std::cout << "SetConsoleWindowInfo failed with error: " << GetLastError() << std::endl;
		}

		if (!SetConsoleTitle(L"TEST"))
		{
			std::cout << "SetConsoleTitle failed with error: " << GetLastError() << std::endl;
		}
	}

private:
	int width, height;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
};