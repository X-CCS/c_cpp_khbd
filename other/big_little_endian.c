#include <stdio.h>

union un
{
	char ch;
	int data;
};

int main()
{
	union un u;
	u.data = 0x12345678;

	if(u.ch == 0x12)
	{
		printf("Big Endian!\n");
	}
	else if(u.ch == 0x78)
	{
		printf("Little Endian!\n");
	}
	else
	{
		printf("Unknown!\n");
	}

	return 0;
}
