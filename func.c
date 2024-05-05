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
int delay(int second,int speed)
{
    if(second >120 || speed == 0 )
    {
        printf("that will take forever!\n");
        return 1;
    }
    else if(speed >10)
    {
        printf("slowdown man!!\n");
        return 1;
    }
    unsigned long long int mili=(second*1000)/speed;
    clock_t time=clock();
    while(clock()<time+mili)
    {}
    return 0;
}

