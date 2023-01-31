#include <stdio.h>
#include <stdlib.h>

int *FillRand(int *A, int n);
int *FillInc(int *A, int n);
int *FillDec( int *A, int n);
int CheckSum(int *A, int n);
int RunNumber(int *A, int n);
int PrintMas(int *A, int n);

int main()
{
	while (1){
	
    int n;
    scanf("%d", &n);
    int A[n];
    
   /* FillInc(A, n);
    PrintMas(A, n);
    printf("[Sum : %d; Number of series: %d]", CheckSum(A, n), RunNumber(A, n));
    
    FillDec(A, n);
    PrintMas(A, n);
    printf("[Sum : %d; Number of series: %d]", CheckSum(A, n), RunNumber(A, n)); */
    
    FillRand(A, n);
    PrintMas(A, n);
    printf("[Sum : %d; Number of series: %d]", CheckSum(A, n), RunNumber(A, n));
	}
}



int *FillInc(int *A, int n)
{
	int i = 0;
	A[i] = 1;
	
	for (i = 1; i < n; )
    {
    	A[i] = 1 + 2*i;
    	if (A[i-1] < A[i])
    	{
    		i++;
    	}
    }
    
    return *A;
}

int *FillDec( int *A, int n)
{
	int i = 0;
	A[i] = 100;

	
	for (i = 1; i < n; )
    {
    	A[i] = 100 - 2*i;
    	
    	if (A[i-1] > A[i])
    	{
    		i++;
    	}
    }
    return *A;
}



int *FillRand(int *A, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
    {
    	A[i] = 1 + rand()% 100;
    }
	return 0;
}

int CheckSum(int *A, int n)
{
	int i = 0, sum = 0; 
	for (i = 0; i < n; i++)
	{
		sum += A[i];
	}
	
	return sum;
}

int RunNumber(int *A, int n)
{
	int i = 0;
	int series = 1;
	for (i = 0; i <= n - 2; i++)
    {
    	if (A[i] > A[i + 1])
    	{
    		series ++;
    	}
    }
	return series;
}

int PrintMas(int *A, int n)
{
	printf("\n");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}








