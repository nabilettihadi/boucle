#include<stdio.h>
#include<stdlib.h>

void main(){
    int x,i;
    printf("Entrer votre nombre:");
    scanf("%d",&x);
    printf("le tableau de multiplication du nombre %d est:\n",x);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",x,i,x*i);
}