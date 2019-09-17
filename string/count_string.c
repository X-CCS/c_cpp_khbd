#include <stdio.h>

void printCountString(char *str)
{
	int count[256] = {0};
	for(char *p = str; *p; p++)
	{
		count[*p]++;
	}

	for(int i = 0; i < 256; i++)
	{
		if(count[i] > 0)
		{
			printf("The count of %c is: %d\n", i, count[i]);
		}
	}
}

int main()
{
	printCountString("hello, world! I am lichen.");

	return 0;
}
