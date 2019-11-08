#include<stdio.h>
int main()
{
    int count=0;
    int a=0;
    int b=0;
    scanf("%d",&b);
    while(b!=0)
    {
        a=b%2;
        b=b/2;
        if(a==1)
        count++;
    }
    printf("%d\n",count);
    return 0;
}