//Bubble sort
#include <stdio.h>

template <class T>
int getArrayLen(T& array)

{
   return (sizeof(array) / sizeof(array[0]));
}

void Swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void BubbleSort(int A[], int len)
{
	for (int j = 0; j < len - 1; j++)
	{
		for (int i = 0; i < len - 1 -j; i++)
		{
			if (A[i] > A[i + 1])
			{
				Swap(A, i, i + 1);
			}
		}
	}
}

int main()
{
	int A[] = { 3, 4, 6, 7, 2, 1, 5};
	int len = getArrayLen(A);
	BubbleSort(A,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}