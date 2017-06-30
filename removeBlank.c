#include <stdio.h>

char* removeBlank(char *s)
{
	char *p1 = s;
	char *p2 = s;
	
	while(*p1)
	{
		if(*p1 == ' ')
		{
			p1++;
		}
		else
		{
			*p2++ = *p1++;
		}
	}
	*p2 = 0;
	
	return s;
}

char* removeBlank2(char *s)
{
	int num = 0;
	
	while(*s)
	{
		if(*s == ' ')
		{
			num++;
		}
		else
		{
			*(s-num) = *s;
		}
		s++;
	}
	*(s-num) = 0;
	
	return s;
}



int main(int argc, int **argv)
{
	char buf[] = " ab c d ";
	printf("%s\n", removeBlank2(buf));
}
