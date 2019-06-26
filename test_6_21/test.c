#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#if 0
/*	
	1.一个数组中只有两个数字是出现一次，
	其他所有数字都出现了两次。
	找出这两个只出现一次的数字，编程实现。
*/
int main()
{
	int a[10] = { 1,1,56,56,3,4,5,6,8,9 };
	int i = 0, j = 0;
	int n1 = 0, n2 = 0;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		for (j = i; j < sizeof(a) / sizeof(a[0]); j++)
		{
			if (a[i] == a[j])
			{
				if ((n1 == 0) && (i != j))
				{
					n1 = a[j];
				}
				else if ((n2 == 0) && (i != j))
				{
					n2 = a[j];
				}
			}
		}
	}
	printf("n1 = %d, n2 = %d\n", n1, n2);
	system("pause");
	return 0;
}


#elif 0
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int main()
{
	int num = 10;
	int empty = num;
	
	while (empty >= 2)
	{
		num += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	printf("num = %d\n", num);
	system("pause");
	return 0;
}


#elif 0
//模拟实现strcpy(); --- 
char * My_Strcpy( char *dest, const char* src)
{
	char *p = dest;
	assert((dest != NULL) && (src != NULL));
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}

int main()
{
	char str1[20] = "0";
	char *str2 = "abcde";
	char *str3 = My_Strcpy(str1, str2);
	printf("str3 = %s\n", str3);
	system("pause");
	return 0;
}
#elif 0
//模拟实现strcat()

int My_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char * My_strcat(char *dest, const char *src)
{
	char *p = dest;				//创建临时变量
	assert((dest != NULL) && (src != NULL));
	/*先遍历到要插入的位置*/
	while (*p != '\0')
	{
		p++;
	}
	/*正是插入*/

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}

int main()
{
	char dest[20] = "abcde";
	char *src = "bit";
	char *p =	My_strcat(dest, src);
	printf("%s\n", dest);
	printf("%s\n", p);
	system("pause");
	return 0;
}

#elif 0
//模拟实现strstr

char * My_strstr(const char *str1, const char *str2)
{
	//abcaabc
	//aabc
	while (*str1 != '\0')
	{
		char *p = str1;
		char *q = str2;
		while (*q != '\0')
		{
			if (*p != *q)
				break;
			p++;
			q++;
		}

		if (*q == '\0')
			break;
		str1++;
	}
	if (*str1 != '\0')
		return str1;
	else
		return NULL;
}

int main()
{
	char str1[20] = "zzabcdsa";
	char *str2 = "abc";
	char *str = My_strstr(str1, str2);
	printf("%s\n", str);
	system("pause");
	return 0;
}

#elif 0
//模拟实现strchr()

char * My_strchr(const char *str1, const char ch)
{
	assert(str1 != NULL);
	while (*str1 != '\0')
	{
		if (ch == *str1)
		{
			return str1;
		}
		str1++;
	}
	return NULL;
}
int main()
{
	char  str1[20] = "abcdefcde";
	char ch = 'f';
	char * str2 = My_strchr(str1, ch);
	printf("str2 = %s\n", str2);
	system("pause");
	return 0;
}

#elif 0
//模拟实现strcmp(); --- 字符串比较函数
int My_Strcmp(const char *dest, const char* src)
{
	assert((dest != NULL) && (src != NULL));
	while ((*dest != '\0') && (*src != '\0'))
	{
		if (*dest > *src)
		{
			return 1;
		}
		else if (*dest < *src)
		{
			return -1;
		}
		dest++;
		src++;
	}
	if ((*dest == '\0') && (*src != '\0'))
	{
		return -1;
	}
	else if ((*dest != '\0') && (*src == '\0'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str1[20] = "abcde";
	char *str2 = "abcde";
	int n = My_Strcmp(str1, str2);
	printf("n = %d\n", n);
	system("pause");
	return 0;
}

#elif 0
//模拟实现memcpy()函数  memcpy -- 内存拷贝函数

void *My_memcpy(void *dest, const void *src, size_t n)
{
	//void * 是可以返回任意类型的指针
	assert(dest != NULL && src != NULL);
	char *p = (char *)dest;
	char *q = (const char *)src;

	while (n >= 1)
	{
		*p = *q;
		p++;
		q++;
		n--;
	}
	return dest;
}
void Print(int *pa, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", pa[i]);
	}
}
int main()
{
	int c[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int *a = c + 5;
	int *b = c ;
	My_memcpy(b, a, sizeof(int) * 10);
//	memmove(b, a, sizeof(int) * 10);
	Print(c, sizeof(c) / sizeof(c[0]));
	system("pause");
	return 0;
}


#elif 1
//模拟实现memmove() 

void * My_memmove(void * dest, const void *src, size_t n)
{
	assert(dest != NULL && src != NULL);
	char *p = (char *)dest;
	char *q = (const char *)src;
 
	if ((p > q) && (q + n)>p) 
	{
		char *pa = p;
		char *pb = q;
		while (n >= 1)
		{
			*(pa+n-1) = *(pb+n-1);
			n--;
		}
	}
	else
	{
		while (n >= 1)
		{
			*p++ = *q++;
			n--;
		}
	}
	return dest;

}
void Print(int *pa, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", pa[i]);
	}
}
int main()
{
	char a[20] = "12345678910";
	char *b = a + 3;
    My_memmove(b, a, sizeof(char)*5);
  // memmove(b, a, sizeof(char)*5);
	int i = 0;
	printf("%s", b);
	printf("\n");
	system("pause");
	return 0;
}
#endif // 1
