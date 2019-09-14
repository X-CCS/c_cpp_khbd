#include <stdio.h>

int my_strlen(const char *str)
{
	return *str ? my_strlen(str + 1) + 1: 0;
}

int main()
{
	printf("%d\n", my_strlen("lsjkl"));	

	return 0;
}
