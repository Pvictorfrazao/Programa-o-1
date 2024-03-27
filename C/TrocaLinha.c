#include <stdio.h>
#include <stdlib.h>

void TrocarLinha(int **matriz, int lOrigem, int lDestino);

int main()
{
	const int l = 5, c = 5;
	int i, j;
	
	int **mat = NULL;
	mat = (int**) malloc(l*sizeof(int*));
	for(i = 0; i < l; i++)
	{
		mat[i] = (int*) malloc(c*sizeof(int));
	}
	
	
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			mat[i][j] = l*i + j + 1;
		}
	}
	
	printf("Matriz Original\n");
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	TrocarLinha(mat, 0, 2);
	
	printf("\n\nMatriz Trocada\n");
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < l; i++)
	{
		free(mat[i]);
	}
	free(mat);
 	return 0;
}


void TrocarLinha(int **matriz, int lOrigem, int lDestino)
{
	int *tmp = matriz[lOrigem];
	matriz[lOrigem] = matriz[lDestino];
	matriz[lDestino] = tmp;
}