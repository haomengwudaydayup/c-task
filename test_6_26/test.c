#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#if 0
//模拟实现strncpy()

char *My_strncpy(char *dest, const char *src, size_t n)
{
	char *p = dest;
	assert(dest != NULL && src != NULL);

	while ((src != '\0') && (n >= 1))
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return dest;
}
int main()
{
	char str[20] = "nihaoya";
	char *str1 = "sailiya";
	char *str2 = My_strncpy(str, str1, 5);
	printf("%s\n", str2);
	printf("%s\n", str);
	system("pause");
	return 0;
}

#elif 0
//模拟实现strncat()

char * My_strncat(char *dest, const char *src, size_t n)
{
	char *p = dest;
	assert(dest != NULL && src != NULL);
	while (p != '\0')
	{
		p++;
	}

	while ((src != '\0') && (n >= 1))
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return dest;
}
int main()
{
	char str[20] = "nihaoya";
	char *str1 = "sailiya";
	char *str2 = strncat(str, str1, 5);
	printf("%s\n", str); 
	printf("%s\n", str2);
	system("pause");
	return 0;
}

#elif 1

int My_strncmp(const char *str1, const char *str2, int n)
{
	assert((str1 != NULL) && (str2 != NULL) && n > 0);
	while ((*str1 != '\0') && (*str2 != '\0') && (n >=1))
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		str1++;
		str2++;
		n--;
	}
	if ((*str1 == '\0') && (*str2 != '\0'))
	{
		return -1;
	}
	else if ((*str1 != '\0') && (*str2 == '\0'))
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
	char str[20] = "nihaoya";
	char *str1 = "nihaoya";
	int n = My_strncmp(str, str1, 65);
	printf("n = %d\n", n);
	system("pause");
	return 0;
}
#endif // 0

