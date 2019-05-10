#include "map.h"
#include "snake.h"
#include "print.h"
#include <windows.h>
#include <conio.h>

#define DELAY_TIME(div) (600 - (int)(400.0f * (div)))

int getKeyBoard()
{
	int a = _getch();
	int result = ((char)a < 0) ? (a << 8 | _getch()) : a;
	return result;
}
void(*printSence[PAGE_NUM])() = { print_start, print_set, print_exit };
void(*printSet[SET_NUM])(int &x, int &y) = { print_setnumW, print_setnumH };

void setPage(int &x, int &y)
{
	int flag = 0;
	print_setnumW(x, y);
	while (1)
	{
		switch (getKeyBoard())
		{
		case ARROW_LEFT:
			flag--;
			if (flag < 0)
			{
				flag = SET_NUM - 1;
			}
			break;
		case ARROW_RIGHT:
			flag++;
			if (flag > SET_NUM - 1)
			{
				flag = 0;
			}
			break;
		case ARROW_UP:
			flag ? y++ : x++;
			y > 30 ? y-- : y;
			y < 4 ? y++ : y;
			x > 30 ? x-- : x;
			x < 4 ? x++ : x;
			break;
		case ARROW_DOWN:
			flag ? y-- : x--;
			y > 30 ? y-- : y;
			y < 4 ? y++ : y;
			x > 30 ? x-- : x;
			x < 4 ? x++ : x;
			break;
		case '\r':
			return;
		default:;
		}
		printSet[flag](x, y);
	}
}

int welcomePage()
{
	int flag = 0;
	print_start();
	while (1)
	{
		switch (getKeyBoard())
		{
		case ARROW_UP:
			flag--;
			if (flag < 0)
			{
				flag = PAGE_NUM - 1;
			}
			break;
		case ARROW_DOWN:
			flag++;
			if (flag > PAGE_NUM - 1)
			{
				flag = 0;
			}
			break;
		case '\r':
			return flag;
		default:;
		}
		printSence[flag]();
	}
}

void gameStart(int x, int y)
{
	map snakeMap(y, x);
	snake snakeBody(snakeMap);

	int arrow = START_DIR;
	int arrow_last = arrow;
	int flag = 0;
	snakeBody.mkStar(snakeMap);
	snakeMap.printMap(snakeBody.lenth);
	while (1)
	{
		while (_kbhit())
		{
			arrow = getKeyBoard();
			if (arrow == 'p')
			{
				print_pause(snakeBody.lenth);
				while (getKeyBoard() != 'p');
				break;
			}
		}

		switch (arrow)
		{
		case ARROW_DOWN:
			if (arrow_last == ARROW_UP)
				arrow = arrow_last;
			break;
		case ARROW_UP:
			if (arrow_last == ARROW_DOWN)
				arrow = arrow_last;
			break;
		case ARROW_LEFT:
			if (arrow_last == ARROW_RIGHT)
				arrow = arrow_last;
			break;
		case ARROW_RIGHT:
			if (arrow_last == ARROW_LEFT)
				arrow = arrow_last;
			break;
		default:
			arrow = arrow_last;
		}

		switch (arrow)
		{
		case ARROW_DOWN:
			flag = snakeBody.move(snakeMap, 0, 1);
			break;
		case ARROW_UP:
			flag = snakeBody.move(snakeMap, 0, -1);
			break;
		case ARROW_LEFT:
			flag = snakeBody.move(snakeMap, -1, 0);
			break;
		case ARROW_RIGHT:
			flag = snakeBody.move(snakeMap, 1, 0);
			break;
		}

		if (flag)
		{
			print_over(snakeBody.lenth);
			while (getKeyBoard() != '\r');
			return;
		}

		if (snakeBody.lenth == snakeMap.mapArea())
		{
			print_win(snakeBody.lenth);
			while (getKeyBoard() != '\r');
			return;
		}

		snakeMap.printMap(snakeBody.lenth);
		arrow_last = arrow;
		Sleep(DELAY_TIME((float)snakeBody.lenth / (float)snakeMap.mapArea()));
	}
}

int main()
{
	int x = 15, y = 10;
	while (1)
	{
		switch (welcomePage())
		{
		case START:
			gameStart(x, y);
			break;
		case SET:
			setPage(x, y);
			break;
		case EXIT:
			return 0;
		}
	}

	return 0;
}