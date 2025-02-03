#include<stdio.h>
int main(int argc,char*argv[])
{
    if(argc==1)
    {
        printf("no elements");
    }
    else
    {
        char* s1=argv[1];
        char* s2=argv[2];
        int x=atoi(s1);
        int y=atoi(s2);
        printf("%d",x+y);
    }
}