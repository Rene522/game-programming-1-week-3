#include <iostream>
#include <string>


class Ground
{
public:
	void draw(int width, int height)
	{
		for (int i = 0; i < height; i++)
		{
			(i == height - 1) ? std::cout '\n' : std::cout << PrintGround(width);
		}

	}



};