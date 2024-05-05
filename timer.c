#include<stdio.h>
#include<time.h>
#include <windows.h>
#include<C:\Users\omark\Documents\learn-git\learn_git\func.c>

int main ()
{
    int num =1;char c;
    //scanf("%d",&num);
    printf("hacking nasa: \n");
    for(int i=0;i<4;i++)
    {
        printf("phase :[%d]\n",i);
        printline(19);
        for(int j=0;j<20;j++)
        {
            delay(num);
            print(j);
            
        }
        printf("\n");
    }
    system("color 0A");
    printf("hacked saccessfully!\nPress any key");
    c=getchar();
    return 0;
}
