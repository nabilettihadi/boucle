#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,i;
    printf("Entrer votre nombre:");
    scanf("%d",&x);
    
    for(i=2;i<=x/2;i++)
    
    {   
        if ((x%i)==0)
            printf("le nombre %d n'est pas premier :\n",x);
        else if ((x%i)!=0)    
            printf("le nombre %d est premier :\n",x);
            
    }

        
}