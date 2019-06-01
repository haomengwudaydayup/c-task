#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<Windows.h>

#if 0
int MyStrlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverseStr(char *str)
{
	char *left = str;
	char*right = str + MyStrlen(str) - 1;
	reverse(left, right);
	//tneduts a ma i
	char *cur = str;

	while (*cur != '\0')
	{
		//每个单词的开始
		char *start = cur;
		//cur走到空格或者\0
		while (*cur == ' ' && *cur == '\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		if (*cur == ' ')
		{
			cur++;
		}

	}
}

int main()
{
	char str[20] = "i am a student";
	reverseStr(str);
	printf("反转后: %s\n", str);
	getch();
	return 0;
}

#elif 0

int main()
{
	//windows操作系统在输出这块没有缓冲区，Linux和Max存在
	printf("你好");
	Sleep(100);

	printf("\nhehe\n");
	getch();
	return 0;
}

#elif 1

int main()
{
	//int a = 0, b = 0, c = 0;
	//scanf_s("%d", &a);//缓冲区和前面的格式控制符相关，如果我输入正确的话，就会退出缓冲区，否则你还的输入，因为不满足条件
	//printf("%d %d %d\n", a, b, c);
	
	/*int a = 1, b = 2;
	scanf_s("a = %d", &a);
	scanf_s("b = %d", &b);
	printf("a = %d, b= %d\n", a, b);*/
	getch();
	return 0;
}

#endif // 0


