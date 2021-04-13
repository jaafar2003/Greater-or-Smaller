#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int NUM;
    int MysteryNumber;
    const int MAX = 100, MIN = 1;
    
   srand(time(NULL));
  MysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    
    do
    {
        printf(" Choose a number : ");
        scanf("%d", &NUM);
        
        if ( NUM == MysteryNumber )
        {
    printf(" Congralutation !\n ");
        }
        else if ( NUM > MysteryNumber)
        {
            printf(" It's greater !\n");
        }
        else 
        {
            printf(" It's smaller !!\n");
        }
        
    } while( NUM != MysteryNumber);
    
    return 0;
}
