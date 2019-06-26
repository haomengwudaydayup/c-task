#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#if 0
/*	
	1.һ��������ֻ�����������ǳ���һ�Σ�
	�����������ֶ����������Ρ�
	�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

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
//ģ��ʵ��strcpy(); --- 
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
//ģ��ʵ��strcat()

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
	char *p = dest;				//������ʱ����
	assert((dest != NULL) && (src != NULL));
	/*�ȱ�����Ҫ�����λ��*/
	while (*p != '\0')
	{
		p++;
	}
	/*���ǲ���*/

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
//ģ��ʵ��strstr

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
//ģ��ʵ��strchr()

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
//ģ��ʵ��strcmp(); --- �ַ����ȽϺ���
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
//ģ��ʵ��memcpy()����  memcpy -- �ڴ濽������

void *My_memcpy(void *dest, const void *src, size_t n)
{
	//void * �ǿ��Է����������͵�ָ��
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
//ģ��ʵ��memmove() 

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
