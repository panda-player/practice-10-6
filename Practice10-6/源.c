#include<stdio.h>




int main()
{
	int arr1[30][30];
	arr1[0][0] =  1 ;
	int i = 0;
	int j = 0;
	for (i = 1; i < 30; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			arr1[i][0] = 1;

			int c = i;
			int d = 1;
			arr1[i][i] = 1;
			if (i >= 2)
			{
				for (d = 1; d < j; d++)
				{

					arr1[c][d] = arr1[c - 1][d-1] + arr1[c - 1][d ];

				}

			}

		}
		
	}

	int h = 0;
	int f = 0;
	for (h = 0; h < 30; h++)
	{
		for (j = 0; j < h + 1; j++)
		{
			printf("%d  ", arr1[h][j]);
		}
		printf("\n");
	}

	return 0;
}