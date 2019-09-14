#include <stdio.h>

void *my_memmove(void *dst, const void *src, size_t count)
{
	char *psrc = (char *)src;
	char *pdst = (char *)dst;

	if(dst == NULL || src == NULL)
	{
		return NULL;
	}

	if(pdst <= psrc || pdst >= psrc + count)
	{
		while(count--)
		{
			*pdst++ = *psrc++;
		}
	}
	else
	{
		pdst = pdst + count - 1;	//移动到末尾
		psrc = psrc + count - 1;
		while(count--)
		{
			*pdst-- = *psrc--;
		}
	}

	return dst;
}

typedef struct Student
{
	char name[32];
	int age;
}Stu;

int main()
{
	Stu s1 = {"李晨", 25};
	Stu s2;

	my_memmove(&s2, &s1, sizeof(s1));

	printf("%s - %d\n", s1.name, s1.age);
	printf("%s - %d\n", s2.name, s2.age);

	return 0;
}

