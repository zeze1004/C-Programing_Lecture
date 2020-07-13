#include <stdio.h>

int main()
{
	for (int i = 0; i < 128; i++)
	{
		printf(" %d ", i);
		if ((i+1) % 13 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}