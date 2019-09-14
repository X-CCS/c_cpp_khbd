#include <stdio.h>

char *mystrstr(const char *str1, const char *str2)
{
	char *cur = (char *)str1;
	char *s1 = NULL;
	char *s2 = NULL;

	if(str1 == NULL || str2 == NULL)
		return NULL;
	
	while(*cur)
	{
		s1 = cur;
		s2 = (char *)str2;

		while(*s2 && !(*s1 - *s2))
		{
			s1++;
			s2++;
		}

		if(*s2 == '\0')
		{
			return cur;
		}

		cur++;
	}

	return NULL;
}

int main()
{
	printf("%s\n", mystrstr("sb123", "212"));

	return 0;
}
