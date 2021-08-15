#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter first and second value:");
	scanf("%d %d",&i,&j);
	
	int *ptr,*ptr2;
	ptr=&i;
	ptr2=ptr;
	ptr=&j;
	printf("%d %d",*ptr,*ptr2);
	
	return 0;
}
/*#include<stdio.h>
int main()
{
	int *ptr;
	int i=10,j=20;
	ptr=&i;
//	printf("%p",ptr);
//	printf("%p",ptr+1);
    //ptr+1=20;
    j=*ptr;
    i=*ptr+1;
    printf("%d %d",i,j);

	return 0;
	
}*/
