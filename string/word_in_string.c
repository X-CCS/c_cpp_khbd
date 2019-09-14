#include <stdio.h>

int word_in_string(const char *str)
{
	int count = 0;
	int isWord = 0;
	int i = 0;
	char c = 0;

	for(i = 0; (c = str[i]) != '\0'; i++)
	{
		if(c == ' ')
		{
			isWord = 0;
		}
		else if(isWord == 0)
		{
			isWord = 1;
			count++;
		}
	}
	
	return count;
}

int main()
{
	char str[1024] = "I am a good student!";

	printf("%d\n", word_in_string(str));

	return 0;
}
