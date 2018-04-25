
#include "stdafx.h"

#define map_size 256

int main()
{
	int map[map_size] = { 0 };

	const char * str;
	scanf("%s", str);
	int str_len = strlen(str);

	int i;
	for (i = 0; i < str_len; i++)
	{
		map[(unsigned char)str[i]]++;
	}

	for (i = 0; i < map_size; i++)
	{
		if (map[i])
			printf("'%c' = %d\n", (char)i, map[i]);
	}
	getchar();
	return 0;
}


