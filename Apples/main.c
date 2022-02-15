#include <stdio.h>
#include "control.h"


int main()
{
    int applesGiven, applesOwned,applesTotal;
    
    applesOwned = 5;
    applesGiven = 7;
    
    printf("Ana had 5 apples and is given 7 more.\n");
    
    suma(applesGiven,applesOwned, &applesTotal);
    
    printf("Ana now has %d apples", applesTotal);

    return 0;
}
