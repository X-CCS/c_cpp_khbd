#include <stdio.h>

char *my_toupper(char *dst, const char *src)
{
	if(dst == NULL || src == NULL)
		return NULL;

	int i = 0;
	while(src[i] != '\0')
	{
		if(src[i] >= 'a' && src[i] <= 'z')
		{
			dst[i] = src[i] - 32;
		}
		else
		{
			dst[i] = src[i];
		}
		i++;
	}
	dst[i] = '\0';

	return dst;
}

int main()
{
	char *src = "heLlO";
	char dst[32] = {0};

	my_toupper(dst, src);

	printf("dst = %s\n", dst);

	return 0;
}
