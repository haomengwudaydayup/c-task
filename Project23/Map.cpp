#include "map.h"

map::map(int hight, int width)
{
	m_hight = hight;
	m_width = width;
	points = new int *[hight];
	for (int i = 0; i < hight; i++)
	{
		points[i] = new int[width];
		memset(points[i], 0, width * sizeof(int));
	}
}

map::~map()
{
	if (points)
	{
		for (int i = 0; i < m_hight; i++)
		{
			if (points[i])
			{
				delete[] points[i];
			}
		}
		delete[] points;
	}
}

void map::printMap(int score)
{
	int i, j;
	int lenth = m_hight * m_width * 2 + (m_hight + m_width + 2) * 4 + m_width * 2 + 60 + m_hight + 2;
	char * printStr = new char[lenth];
	char strscore[4] = { 0 };
	memset(printStr, 0, lenth * sizeof(char));
	for (i = 0; i < m_width + 2; i++)
	{
		strcat_s(printStr, lenth, "■");
	}
	strcat_s(printStr, lenth, "\n");
	for (i = 0; i < m_hight; i++)
	{
		strcat_s(printStr, lenth, "■");
		for (j = 0; j < m_width; j++)
		{
			switch (points[i][j])
			{
			case BLACK:
				strcat_s(printStr, lenth, "　");
				break;
			case HEAD:
				strcat_s(printStr, lenth, "◎");
				break;
			case STAR:
				strcat_s(printStr, lenth, "★");
				break;
			default:
				strcat_s(printStr, lenth, "●");
			}
		}
		strcat_s(printStr, lenth, "■\n");
	}
	for (i = 0; i < m_width + 2; i++)
	{
		strcat_s(printStr, lenth, "■");
	}
	strcat_s(printStr, lenth, "\n");
	sprintf_s(strscore, "%3d", score);
	strcat_s(printStr, lenth, "目前得分:");
	strcat_s(printStr, lenth, strscore);
	strcat_s(printStr, lenth, "  方向键移动  P键暂停");
	system("cls");
	puts(printStr);
	delete[] printStr;
}

void map::setValue(int x, int y, int value)
{
	points[x][y] = value;
}

int map::mapArea()
{
	return m_hight * m_width;
}
