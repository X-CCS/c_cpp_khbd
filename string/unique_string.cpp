#include <iostream>
#include <map>
#include <string.h>

using namespace std;

char getUniqueChar(char *str)
{
	map<char, int> m;
	for(char *p = str; *p != '\0'; p++)
	{
		m[*p]++;
	}

	map<char, int>::iterator iter = m.begin();
	for(; iter != m.end(); iter++)
	{
		if((*iter).second == 1)
		{
			return (*iter).first;
		}
	}

	return 0;
}

int main()
{
	printf("%c\n", getUniqueChar((char *)"abcabac"));

	return 0;
}
