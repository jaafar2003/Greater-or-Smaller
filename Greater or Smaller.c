#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int NUM;
    int nombreMystere;
    const int MAX = 100, MIN = 1;
    
   srand(time(NULL));
   nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    do
    {
        printf(" Choose a number : ");
        scanf("%d", &NUM);
        
        if ( NUM == nombreMystere )
        {
    printf(" Congralutation !\n ");
        }
        else if ( NUM > nombreMystere )
        {
            printf(" It's greater !\n");
        }
        else 
        {
            printf(" It's smaller !!\n");
        }
        
    } while( NUM != nombreMystere );
    
    return 0;
}
