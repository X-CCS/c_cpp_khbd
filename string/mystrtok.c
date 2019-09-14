#include <stdio.h>

int mystrtok(const char *src, char separator, char dst[][20])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(src[i] != '\0')
	{
		if(src[i] != separator)
		{
			dst[j][k] = src[i];
			i++;
			k++;
		}
		else
		{
			dst[j][k] = '\0';
			j++;
			i++;
			k = 0;
		}
	}
	dst[j][k] = '\0';

	return j + 1;
}

int main()
{
	char *src = "abc,123,y78,999";
	char dst[4][20] = {0};
	char separator = ',';

	int n = mystrtok(src, separator, dst);
	int i = 0;
	printf("%d\n", n);
	for(i = 0; i < n; i++)
	{
		printf("%s\n", dst[i]);
	}

	return 0;
}

