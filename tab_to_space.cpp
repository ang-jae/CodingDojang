#include <stdio.h>

void tab_to_space(char*original)
{
	for (int i = 0; i < sizeof(original); i++)
	{
		if (original[i] == '\t')
		{
			original[i] = '    ';
		}
	}
}

void main()
{
	char tmp[] = "Hello, world!	I am ANG JAE";
	tab_to_space(tmp);
	printf("%s", tmp);
}
