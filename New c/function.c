#include<stdio.h>

void goodMorn();
void goodNoon();
void goodNight();///function prototype ;

int main()
{
    goodMorn();
    return 0;
}

void goodMorn()
{

    printf("good Morn\n");
    goodNoon();
}

void goodNoon()
{
    goodNight();
    printf("good Noon\n");
}

void goodNight()
{
    printf("good Night\n");
}
