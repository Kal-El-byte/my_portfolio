#include <stdio.h>
#include <stdio.h>
#define r 4
#define c 2

int main() 
{
int A[r][c], B[r][c], C[r][c], i, j;
printf("Enter matrix B(%d x %d):", r, c);

	//Reading for A[r][c]
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("Enter element A(%d x %d): ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
		if(i==4)
			break;
	}
	//Reading for B[r][c]
printf("Enter matrix B(%d x %d):", r, c);
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("Enter element B(%d x %d): ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
		if(i==4)
			break;
	}

	//Store the result of A[r][c]+B[r][c]
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
		if(i==4)
			break;
	}

//print the resulting matrix
printf("The resulting matirx C is : \n");
for(i=0; i<r; i++)
{
    for (j=0;j<c;j++)
    {
    	printf("%4d", C[i][j]);
    }
    	printf ("\n");
}

    return 0;
}
