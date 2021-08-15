#include<stdio.h>
void copy_string(char*, char*);
char source[100], target[100];
int length;
int main()
{
    printf("Enter source string\n");    
    gets(source);    
    copy_string(target, source);    
    printf("Target string is \"%s\"\n", target); 
	printf("the Length of new string is:%d",length);   
    return 0;
}

void copy_string(char *target, char *source)
{
    length=0;
	while(*source)
    {
        *target = *source;        
        //printf("%s",source);
		source++;        
        target++;
        //printf("%s",source);
        length+=1;
    }    
    *target = '\0';
}
