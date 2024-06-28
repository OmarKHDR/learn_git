#include<stdio.h>
#include<time.h>
#include<windows.h>
#include "func.c"

int main ()
{
    int num =1,speed=1;
    char c;
    printf("Enter hacking speed[1:10] : ");
    scanf("%d",&speed);
    printf("processing \%\n ");
    if(delay(num,speed))
    {
        main();
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("hacking nasa: \n");
    for(int i=0;i<4;i++)
    {
        printf("phase :[%d]\n",i);
        printline(19);
        for(int j=0;j<20;j++)
        {
            delay(num,speed);
            print(j);
            
        }

        SetConsoleTextAttribute(hConsole,10);
        printf("\nSuccess.\n");
        SetConsoleTextAttribute(hConsole,7);

    }
    SetConsoleTextAttribute(hConsole,32);
    printf("hacked saccessfully!\n");
    SetConsoleTextAttribute(hConsole,7);
    printf("Press any key");
    scanf("%c ",&c);
    c++;

    return 0;
}
