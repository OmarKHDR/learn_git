#include<stdio.h>
#include<time.h>

int printline(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("-");
    }
    return 0;
}

int print (int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\b");
    }
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
    return 0;
}
void delay(int second)
{
    if(second >300 )
    {
        printf("that will take forever!\ngoodby");
        return;
    }
    unsigned long long int mili=second*1000;
    clock_t time=clock();
    while(clock()<time+mili)
    {}
    return;
}

