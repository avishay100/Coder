#include <stdio.h>

int main()
{
    int i,n;
 	int** iparry;
	int* ia;


	iparry = (int**)calloc(n, sizeof(int*));
	for (i = 0; i < n; i++)
		iparry[i] = (int*)calloc(n, sizeof(int));
	

	iparry[0][0] = 3;
	printf("iparry[0][0] = %d\n", iparry[0][0]);
}
