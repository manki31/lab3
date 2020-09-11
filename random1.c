#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
void delay(float sec)
{
    int millis = 1000 * sec;
    clock_t start_time = clock();
    while (clock() < start_time + millis)
        ;
}

int main()
{
    int i = 0;
    float delayTime;
    printf("\nEnter the delay (in sec) - ");
    scanf("%f", &delayTime);
    while (!kbhit())
    {
        printf("\nDelay Time - %f", delayTime);
        printf("\nRandom Number Generated - %d", rand());
        delay(delayTime);
        i++;
    }
    main();
    return 0;
}
