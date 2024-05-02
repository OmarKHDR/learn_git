#include<stdio.h>
#include<time.h>

void delay(int second);


int main ()
{
    int num =2;
    //scanf("%d",&num);
    printf("hacking nasa: \n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            delay(num);
            printf("#");
            
        }
        printf("\n");
    }

}


void delay(int second)
{
    if(second >300 )
    {
        printf("thats too much time!");
        return;
    }
    unsigned long long int mili=second*1000;
    clock_t time=clock();
    while(clock()<time+mili)
    {}
    return;
}
