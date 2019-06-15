#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#if 0
char *strcat(char *dest, const char *src)
{
	char *p = dest;
	/*if ((dest == NULL) || (src == NULL))
	{
		exit(0);
	}*/
	assert(dest != NULL && src != NULL);

	while (*dest != '\0')
	{
		dest++;
	}
	while (*(dest++) = *(src++));
	return p;
}

int main()
{
	char dest[20] = "hello";
	char *src = "bit";
	strcat(dest, src);
	printf("%s\n", dest);
	system("pause");
	return 0;
}

#elif 0

int strcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL && str2 != NULL);
	while ((*(str1++) != '\0') && (*(str2++) != '\0'))
	{
		if ((*str1) > (*str2))
		{
			return 1;
		}
		if((*str1) < (*str2))
		{
			return -1;
		}
	}

	if ((*str1 == '\0') && (*str2 != '\0'))
	{
		return -1;
	}
	if ((*str1 != '\0') && (*str2 == '\0'))
	{
		return 1;
	}
	if ((*str1 == '\0') && (*str2 == '\0'))
		return 0;
}

int main()
{
	char *str1 = NULL;
	char *str2 = NULL;
	int n = strcmp(str1, str2);
	printf("%d\n", n);
	system("pause");
	return 0;
}
#elif 0

char *strcpy(char *dest, const char *src, int n)
{
	int i = 0;
	char *p = dest;
	assert(dest != NULL && src != NULL && n > 0);
	
	while (*src != '\0' && i < n)
	{
		*(dest++) = *(src++);
		i++;
	}
//	*dest = '\0';
	return p;
}
int main()
{
	char dest[20] = "abcd";
	char *src = "hello";
	int n = 3;
	strcpy(dest, src, n);
	printf("%s\n", dest);
	system("pause");
	return 0;
}

#elif 0

char *strcat(char *dest, const char *src, int n)
{
	char *p = dest;
	int i = 0;
	assert(dest != NULL && src != NULL && n > 0);

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return p;
}

int main()
{
	char dest[20] = "hello";
	char *src = "bidsfft";
	int n = 10;
	strcat(dest, src, n);
	printf("%s\n", dest);
	system("pause");
	return 0;
}
#elif 0

int strncmp(const char *str1, const char *str2, int n)
{
	int count = 0;
	assert(str1 != NULL && str2 != NULL && n > 0);
	while ((*str1++ != '\0') && (*str2++ != '\0') && count < n)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		if (*str1 < *str2)
		{
			return -1;
		}
		count++;
	}

	if ((*str1 == '\0') && (*str2 != '\0'))
	{
		return -1;
	}
	if ((*str1 != '\0') && (*str2 == '\0'))
	{
		return 1;
	}
	if (((*str1 == '\0') && (*str2 == '\0')) || count == n)
		return 0;
	
}
int main()
{
	//双等号优先级大于等号，等号优先级最低
	char *str1 = "abcdef";
	char *str2 = "adcdf";
	int n = 10;
	int n1 = strncmp(str1, str2, n);
	printf("%d\n", n1);
	system("pause");
	return 0;
}
#elif 1

char *My_strstr(const char *str1, const char *str2)
{
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0')
	{
		//abcdef
		//bcd
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
	char *str1 = "abbbcdef";
	char *str2 = "bbc";
	char *str3 = My_strstr(str1, str2);
	printf("%s\n", str3);
	system("pause");
	return 0;
}
#endif // 0

