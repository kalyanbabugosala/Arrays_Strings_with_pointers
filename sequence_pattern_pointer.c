#include <stdio.h>
int main() 
{
    int i,n,j;
    scanf("%d",&n);
    int sum=(n*(n+1))/2;
    int input[sum];
    int seq[sum];
    int k=0;
    int count=0;
    for(i=0;i<sum;i++)
    {
        scanf("%d",&seq[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          input[k]=i;
          k+=1;
        }
    }
    for(i=0;i<sum;i++)
    {
       printf("%d ",seq[i]);    
    }
    
    for(i=0;i<sum;i++)
    {
        if (input[i]==seq[i])
        {
            count+=1;
            
        }
        else
        {
            break;
        }
    }
    
   if (count==sum)
   {
       printf("Valid");
       
   }
   else
   {
       printf("Not valid");
       
   }
   return 0;
    
    
    
    
}
