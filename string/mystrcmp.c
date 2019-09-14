#include <stdio.h>

int mystrcmp(const char *str1, const char *str2)
{
	unsigned char c1 = 0;
	unsigned char c2 = 0;

	while(1)
	{
		c1 = *str1++;
		c2 = *str2++;
		if(c1 != c2)
			return c1 < c2 ? -1 : 1;

		if(c1 == '\0')
			break;
	}

	return 0;
}

int main()
{
	printf("%d\n", mystrcmp("haha", "hahe"));	

	return 0;
}
