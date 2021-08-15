#include<stdio.h>
#define max 50
int i,src[max],dest[max];
int *ptr;
int main()
{
	int n;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter n elements in to array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&src[i]);
	}
	ptr = src;
	//printf("%x",ptr);
	for(i=0;i<n;i++)
	{
		dest[i]=*ptr;
		ptr++;
	}
	printf("After copying to destination dest is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",dest[i]);
	}
	return 0;
}
