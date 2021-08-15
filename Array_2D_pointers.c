#include<stdio.h>
#define max 5
int arr[max][max];
int main()
{
	int rows,col,i,j;
	int sum=0;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	printf("Enter no of columns:");
	scanf("%d",&col);
	printf("Enter the elements %d in to the array:",rows*col);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	
	int *ptr=&arr[0][0];//if we not mentioned [0][0] we will get warning called undefined pointer.
	for(i=0;i<rows*col;i++)
	{
		printf("%d\n",*(ptr+i));	
	}
	//printf("the sum of all elements in the 2D array is:%d",sum);
	return 0;
}

