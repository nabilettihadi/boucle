#include<stdio.h>

void main()
{   int a,n,i,som=0,max=0;

    do{ printf("Entrer la taille de la serie:\n");
        scanf("%d",&n);
    }while(n<0);

    for (i=0;i<n;i++){
    
        printf("Entrer un nombre (0<nombre<100):\n");
        scanf("%d",&a); 
        
        if((a%10)==0 && (a>0 && a<100) )
        som+=a;       
        if(a>max && (a%10)==0 && (a>0 && a<100))
        max=a;
                
    }

    printf("la somme de cette serie est : %d:\n",som);
    printf("le max de cette serie est : %d:\n",max);

}