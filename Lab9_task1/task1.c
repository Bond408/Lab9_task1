#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
int main(void)
{
	int main2(void); {
		int row, col;
		for (row = 1; row <= ROW; ++row)
		{
			printf("\n");
			for (col = 1; col <= row; ++col)
			{
				printf("%d ", col * row);

			}
		}
		system("pause");

	}

	int main3(void); {
		setlocale(LC_ALL, "RUS");
		int row, col;
		int number;
		printf("Укажите число:");
		scanf_s("%d", &number);
		for (int row = 1; row <= ROW; ++row)
		{
			printf("\n");
			for (col = 1; col <= row; ++col)
			{
					printf("%d ", number);
			}
		}

	}

}