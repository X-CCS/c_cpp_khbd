#include <stdio.h>
#include <string.h>

int my_atoi(const char *str)
{
	int sum = 0;
	int sign = -1;

	if(str == NULL)
		return -1;

	sign = (*str == '-') ? -1 : 1;
	if(*str == '+' || *str == '-')
	{
		str++;
	}

	while(*str != '\0')
	{
		if(*str >= '0' && *str <= '9')
		{
			sum = sum * 10 + (*str - '0');
			str++;
		}
		else
		{
			return -1;
		}
	}

	return sum * sign;
}

int main()
{
	printf("%d\n", my_atoi("-878"));

	return 0;
}
