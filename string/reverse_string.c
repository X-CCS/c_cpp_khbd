#include <stdio.h>
#include <string.h>

char *reverse_string1(char *str)
{
	char *p = str;
	char *q = str;

	while(*q)
	{
		q++;	
	}
	q--;

	while(q > p)
	{
		char tmp = *p;
		*p++ = *q;
		*q-- = tmp;
	}

	return str;
}

char *reverse_string2(char *str, int left, int right)
{
	while(left < right)
	{
		char tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}

	return str;
}

int main()
{
	char str[1024] = "markdown";
	int len = strlen(str);

	//printf("%s\n", reverse_string1(str));
	printf("%s\n", reverse_string2(str, 0, len-1));

	return 0;
}
