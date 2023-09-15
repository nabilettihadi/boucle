#include <stdio.h>

int main(){
    int lines = 15, spaces, stars, i;
    
    for(i = 1; i <= lines; i++){
        
        for(spaces = 1; spaces <= lines - i ; spaces++)
            printf(" ");

        for(stars = 1; stars <= i * 2 - 1; stars++)
            printf("*");
        printf("\n");
    }
}