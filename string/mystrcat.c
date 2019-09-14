#include <stdio.h>

char *mystrcat(char *dst, const char *src)
{
	if(dst == NULL || src == NULL)
		return NULL;

	while(*dst != '\0')
	{
		dst++;
	}

	while(*dst++ = *src++);

	return dst;
}

int main()
{
	char *src = "hello";
	char dst[100] = "www.";

	mystrcat(dst, src);

	printf("%s\n", dst);

	return 0;
}
