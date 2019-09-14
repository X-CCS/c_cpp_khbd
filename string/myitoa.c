#include <stdio.h>

char *my_itoa(int num, char *dst)
{
	int n = 0;
	int i = 0;
	char tmp = '\0';

	if(num == 0)
	{
		dst[0] = '0';
		dst[1] = '\0';
		return dst;
	}

	while(num != 0)
	{
		dst[n++] = num % 10 + '0';
		num /= 10;
	}
	dst[n] = '\0';

	//反转字符串
	for(i = n - 1; i >= n/2; i--)
	{
		tmp = dst[i];
		dst[i] = dst[n-i-1];
		dst[n-i-1] = tmp;
	}

	return dst;
}

int main()
{
	char str[16] = {0};

	printf("%s\n", my_itoa(-6758, str));

	return 0;
}
