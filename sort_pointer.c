#include <stdio.h>
#define max 50
int i;
int main()
{
	int n;
	int arr[max];
	printf("Eneter size of an array:");
	scanf("%d",&n);
	printf("Enter elements in to array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sort(n, arr);

	return 0;
}
void sort(int n, int* ptr)//bubble sort
{
	int j, t;
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}




