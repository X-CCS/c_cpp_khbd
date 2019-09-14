#include <stdio.h>

char *mystrcpy(char *dst, const char *src)
{
	if(dst == NULL || src == NULL)
		return NULL;

	while(*dst++ = *src++);

	return dst;
}

int main()
{
	char *src = "hello";
	char dst[100] = {0};

	mystrcpy(dst, src);

	printf("%s\n", dst);

	return 0;
}
